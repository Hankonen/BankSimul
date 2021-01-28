#include "connectlib.h"
#include <QWidget>
#include <QApplication>
#include <QtWidgets>
#include <QtSql>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>



Connectlib::Connectlib()
{
    createConnection();
    model = new QSqlTableModel;
}



bool Connectlib::createConnection()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("");
    db.setDatabaseName("");
    db.setUserName("");
    db.setPassword("");

    if(!db.open())
    {
        QMessageBox::critical(nullptr, QObject::tr("MySQL error: "), db.lastError().text());
        return false;
    }


    return true;
}

bool Connectlib::checkLogIn(QString rfid, int pin)
{


    model->setTable("Account");
    model->setFilter("RFID = '"+rfid+"'");
    model->select();

    int pinIndex = model->record().indexOf("PIN");



    QSqlRecord record = model->record(0);

    int realPin = record.value(pinIndex).toInt();
    qDebug() << "REALPIN = " << realPin << "PININDEX:::" << pinIndex;
    if(pin == realPin)
    {
        return true;
    }

    return false;

}

QSqlTableModel *Connectlib::printLog(QString accountID, int which)
{

    if(which == 1)
    {
        model->setTable("Transaction");
        model->setFilter("Payment_AccountID = '"+accountID+"'");
        model->select();

        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Amount"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("From"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("To"));
    }
    if (which == 2)
    {
        model->setTable("Payment_Account");
        model->setFilter("AccountID = '"+accountID+"'");
        model->select();

        model->setHeaderData(1, Qt::Horizontal, QObject::tr("IBAN"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Balance Debit"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Balance Credit"));

    }


    return model;

}



bool Connectlib::updateBalance(QString amount, QString debitCredit, int plusMinus, QString IDParam, QString IBAN)
{
    QSqlQuery query;
    model->setTable("Payment_Account");
    model->setFilter("ID = '"+IDParam+"'");
    model->select();

    int balanceIndex = model->record().indexOf(debitCredit);
    int IBANIndex = model->record().indexOf("AccountNo");

    QSqlRecord record = model->record(0);

    double balance = record.value(balanceIndex).toDouble();
    QString compareIBAN = record.value(IBANIndex).toString();  //muuttuja jolla testataan että IBANnumero täsmää

    double amountCheck = amount.toDouble();

    if (balance >= amountCheck && plusMinus == 1 && IBAN == compareIBAN)
    {
        amountCheck = balance - amountCheck;
        QString amountParam = QString::number(amountCheck);

        query.exec("UPDATE ``.`Payment_Account` SET `"+debitCredit+"` = '"+amountParam+"' WHERE (`ID` = '"+IDParam+"') and (`AccountNo` = '"+IBAN+"')");

        return true;
    }

    if (plusMinus == 2 && IBAN == compareIBAN)
    {
        amountCheck = balance + amountCheck;
        QString amountParam = QString::number(amountCheck);
        query.exec("UPDATE ``.`Payment_Account` SET `"+debitCredit+"` = '"+amountParam+"' WHERE (`ID` = '"+IDParam+"') and (`AccountNo` = '"+IBAN+"')");

        return true;
    }

    return false;


}

void Connectlib::updateLog(QString amount, QString IBANto, QString IBANfrom, QString PAID)
{
    model->setTable("Transaction");
    model->select();
    QSqlQuery query;

    query.exec("insert into Transaction (Amount, PaymentDate, AccountNoFrom, AccountNoTo, Payment_AccountID)"
               "values ('"+amount+"', now(), '"+IBANfrom+"', '"+IBANto+"', '"+PAID+"')");

}

bool Connectlib::checkRFID(QString RFIDparam)
{


    model->setTable("Account");
    model->setFilter("ID = '1'");
    model->select();

    int rfidIndex = model->record().indexOf("RFID");



    QSqlRecord record = model->record(0);

    QString realRFID = record.value(rfidIndex).toString();
    qDebug() << "REALPIN = " << realRFID << "PININDEX:::" << rfidIndex << "RFIDkortilta" << RFIDparam;
    if(RFIDparam == realRFID)
    {
        return true;
    }

    return false;
}




