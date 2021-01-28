#ifndef RFIDDLL_H
#define RFIDDLL_H
#include <QSerialPort>
#include <QDebug>
#include <QString>

#include <QObject>
#include "rfiddll_global.h"
#include "rfidmoottori.h"

using namespace std;

class RFIDDLLSHARED_EXPORT RfidDLL: public QObject
{
    Q_OBJECT
public:
    //RfidDLL();
    void RFIDDLLSHARED_EXPORT kortinID();

private:
    QString palautaID;

    QSerialPort *serial;
    QString korttiID;
    RFIDmoottori *oliomoottori;
signals:
    void RFIDDLLSHARED_EXPORT lukuValmis(QString id);

public slots:
    void writeData();
};

#endif // RFIDDLL_H
