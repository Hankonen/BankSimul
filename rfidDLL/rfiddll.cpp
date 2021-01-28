#include "rfiddll.h"


/*RfidDLL::RfidDLL()
{
}*/

void RfidDLL::kortinID()
{
    oliomoottori = new RFIDmoottori;
    oliomoottori->show();

    serial = new QSerialPort(this);
    serial->setPortName("COM1");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    // serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->setFlowControl(QSerialPort::HardwareControl);

    if (serial->open(QIODevice::ReadWrite))
    {
        qDebug() << serial->portName();
    }else {
        qDebug() << "Portin avaaminen ei onnistunut!";
    }
    connect(serial,SIGNAL(readyRead()),this,SLOT(writeData()));
}

void RfidDLL::writeData()
{
    char data[20];
    int bytesRead;
    bytesRead = serial->read(data,20);
    data[bytesRead] = '\0';

    if (bytesRead>10)
    {
        for (int i=0;i<=9;i++)
        {
            korttiID = data;
        }
        korttiID = korttiID.simplified().remove(0,1).remove(11,1);

        qDebug () << "CardID:" << korttiID << endl;
        emit lukuValmis(QString(korttiID));
        oliomoottori->close();
    }else{
        qDebug () << "Reading card error" << endl;
    }
}
