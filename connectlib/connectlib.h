#ifndef CONNECTLIB_H
#define CONNECTLIB_H

#include "connectlib_global.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlTableModel>
#include <QString>
#include <QVector>
#include <QTableView>

class CONNECTLIBSHARED_EXPORT Connectlib
{

public:
    Connectlib();
    bool createConnection();
    bool checkLogIn(QString rfid, int pin);
    QSqlTableModel *printLog(QString accountID, int which);
    bool updateBalance(QString amount, QString debitCredit, int plusMinus, QString IDParam, QString IBAN);
    void updateLog(QString amount, QString IBANto, QString IBANfrom, QString PAID);
    bool checkRFID(QString RFIDparam);



private:
    QSqlTableModel *model;
};

#endif // CONNECTLIB_H
