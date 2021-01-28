#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);

    olioPinkoodiDLL = new PinkoodiDLL;

    rfidOikein = 0;

    oliorfidDLL = new RfidDLL;

    //kirjautuminen();
    connect(oliorfidDLL, SIGNAL(lukuValmis(QString)), this, SLOT(RFIDKoppi(QString)));
    connect(this, SIGNAL(showMWsignal()), this, SLOT(showMWSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete olioPinkoodiDLL;
    delete olioValuuttamuunninDLL;
    delete oliorfidDLL;
}

void MainWindow::kirjautuminen()
{
    oliorfidDLL->kortinID();
}

        /*IKKUNAN STATEN VALINTA SLOTIT*/
void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3); //Nosta rahaa
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4); //Talleta rahaa
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(5); //Vaihda valuuttaa
    olioValuuttamuunninDLL = new ValuuttamuunninDLL;
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(6); //Saldo
    QString p = "1";

    ui->tableView_saldo->setModel(db.printLog(p, 2));
    ui->tableView_saldo->setColumnHidden(0, true);
    ui->tableView_saldo->setColumnHidden(4, true);
    ui->tableView_saldo->setColumnHidden(5, true);
    ui->tableView_saldo->setColumnHidden(6, true);

}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(7); //Tilitapahtumat
    QString p = "1";

    ui->transactionTableView->setModel(db.printLog(p, 1));
    ui->transactionTableView->setColumnHidden(0, true);
    ui->transactionTableView->setColumnHidden(5, true);

}

void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(8); //Maksa lasku


}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    delete olioValuuttamuunninDLL;
    //kirjaudu ulos -nappi
}

void MainWindow::on_pushButton_8_clicked()
{
    if (ui->stackedWidget->currentIndex() >= 2)
    ui->stackedWidget->setCurrentIndex(2); //Palaa alkuun -nappi
    delete olioValuuttamuunninDLL;
}

        /*NOSTO SLOTTI*/
void MainWindow::on_pushButton_nosta_clicked()
{
    QString debitCreditParam; //parametrimuuttuja millä tarkistetaan käytetäänkö debittiä vai kredittiä
    QString amountParam = ui->lineEdit_nostoSum->text();        //lineEditiltä summa mikä halutaan nostaa
    QString IDparam = "1";
    QString IBANPar = "FI1234";

    if(pankkiVisa == 1)
    {
        debitCreditParam = "BalanceDebit";
    }
    if(pankkiVisa == 2)
    {
        debitCreditParam = "BalanceCredit";
    }

    qDebug() << "APUA SUMMA: " << amountParam;

    if(db.updateBalance(amountParam, debitCreditParam, 1, IDparam, IBANPar))      //kutsutaan connectlib dll funktiota, kolmanneksi viimeinen parametri kertoo funktiolle että
                                                                //kyseessä on nosto
    {
        qDebug() << "MENI LÄPI";
        QMessageBox::information(this, "Nosto suoritettu", "Kiitos asioinnista!"); //Noston jälkeinen viesti
    }
    else{
        qDebug() << "EI MENNY LÄPI";
        QMessageBox::critical(this, "Tilillä ei katetta", "Tilillä ei riittävästi katetta, yritä uudelleen."); //ei katetta viesti
    }


    ui->stackedWidget->setCurrentIndex(2); //Palauttaa päävalikkoon, kun viesti suljetaan

}

        /*PANO SLOTTI*/
void MainWindow::on_pushButton_pano_clicked()
{

    QString IBANPar = "FI1234";
    QString IDparam = "1";
    QString amountParam = ui->lineEdit_pano->text();        //lineEditiltä summa mikä halutaan tallettaa
    QString debitCreditParam;      //parametrimuuttuja millä tarkistetaan käytetäänkö debittiä vai kredittiä


    if(pankkiVisa == 1)
    {
        debitCreditParam = "BalanceDebit";
    }
    if(pankkiVisa == 2)
    {
        debitCreditParam = "BalanceCredit";
    }

    if(db.updateBalance(amountParam, debitCreditParam, 2, IDparam, IBANPar))      //kutsutaan connectlib dll funktiota, kolmanneksi viimeinen parametri kertoo funktiolle että
                                                                //kyseessä on pano
    {
        qDebug() << "MENI LÄPI";
        QMessageBox::information(this, "Talletus suoritettu", "Kiitos asioinnista!"); //Talletuksen jälkeinen viesti
    }
    else{
        qDebug() << "EI MENNY LÄPI";
        QMessageBox::critical(this, "Error", "Jokin meni pieleen, yritä uudelleen.");
    }

    ui->stackedWidget->setCurrentIndex(2); //Palauttaa päävalikkoon, kun viesti suljetaan
}


        /*SYÖTÄ PIN SLOTTI*/
void MainWindow::on_pushButton_12Syotapin_clicked()
{
    pin = olioPinkoodiDLL->rajapintafunktioPinkoodiDLL(); //TESTI PINKOODI = 127
    int pinTest = pin.toInt();              //muutetaan pinkoodi stringistä intiksi
    qDebug() << pinTest << "apua";
    QString a = "A1";                   //väliaikainen RFID mikä viedään db oliolle
    if (db.checkLogIn(a, pinTest) == true)      //vie RFIDn ja pinkoodin db olion funktiolle joka vertaa pinkoodia tietokantaan
    {
        QMessageBox::information(this, "Pin oikein", "Pinkoodi hyväksytty!");
        ui->stackedWidget->setCurrentIndex(1);
    }
    else {
        QMessageBox::critical(this, "Väärä pin", "Koodisi oli väärin, yritä uudelleen.");
    }
}


        /*VISA/PANKKI VALINTA SLOTIT*/
void MainWindow::on_pushButton_visa_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    pankkiVisa = 2;
}

void MainWindow::on_pushButton_pankki_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    pankkiVisa = 1;
}
        /*LASKUN MAKSU SLOTTI*/
void MainWindow::on_pushButton_maksa_clicked()
{

    QString IBANParFrom = "FI1234";
    QString IBANParTo = ui->lineEdit_SaajanTNro->text();
    QString IDparamFrom = "1";
    QString IDparamTo = "2";
    QString amountParam = ui->lineEdit_MaksunSum->text();        //lineEditiltä summa mikä halutaan maksaa
    QString debitCreditParam;      //parametrimuuttuja millä tarkistetaan käytetäänkö debittiä vai kredittiä
    QString paidParamFrom = "1";    //paymentaccountid muuttujat from ja to
    QString paidParamTo = "2";

    int check = 0;  //tarkistusmuuttuja jolla varmistetaan että raha lähtee tililtä vain jos se menee perille

    if(pankkiVisa == 1)
    {
        debitCreditParam = "BalanceDebit";
    }
    if(pankkiVisa == 2)
    {
        debitCreditParam = "BalanceCredit";
    }

    if(db.updateBalance(amountParam, "BalanceDebit", 2, IDparamTo, IBANParTo)) //ensin päivitetään saajan tili

    {
        qDebug() << "MAKSU MENI LÄPI";
        check = 1;
    }
    else{
        qDebug() << " MAKSU EI MENNY LÄPI";
        check = 2;
    }

    if(db.updateBalance(amountParam, debitCreditParam, 1, IDparamFrom, IBANParFrom) && check == 1) //sitten päivitetään maksajan tili

    {
        qDebug() << "Maksu tililtä lähti MENI LÄPI";
        db.updateLog(amountParam, IBANParTo, IBANParFrom, paidParamFrom);       //päivitetään logi Transaction tauluun
        db.updateLog(amountParam, IBANParTo, IBANParFrom, paidParamTo);     //päivitetään logi Transaction tauluun
        check = 0;
        QMessageBox::information(this, "Maksu Suoritettu", "Kiitos asioinnista!"); //Maksun jälkeinen viesti
    }
    else{
        qDebug() << "EI MENNY LÄPI tililtä";
        check = 0;
        db.updateBalance(amountParam, "BalanceDebit", 1, IDparamTo, IBANParTo); //nollataan virhe vastaanottajan tililtä
        QMessageBox::critical(this, "Error", "Jokin meni pieleen, yritä uudelleen.");
    }

    ui->stackedWidget->setCurrentIndex(2); //Palauttaa päävalikkoon, kun viesti suljetaan

}
                /*MUUNNOS SLOTIT*/
void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    muunnos.setNum(olioValuuttamuunninDLL->muunninrajapinta(index, ui->lineEdit_3->text().toDouble()));

    ui->label_12muunos->setNum(olioValuuttamuunninDLL->muunninrajapinta(index, ui->lineEdit_3->text().toDouble()));
}

void MainWindow::on_lineEdit_3_editingFinished()
{
    muunnos.setNum(olioValuuttamuunninDLL->muunninrajapinta(ui->comboBox->currentIndex(), ui->lineEdit_3->text().toDouble()));

    ui->label_12muunos->setNum(olioValuuttamuunninDLL->muunninrajapinta(ui->comboBox->currentIndex(), ui->lineEdit_3->text().toDouble()));
}

void MainWindow::on_pushButton_12Muunna_clicked()
{
    ui->lineEdit_3->editingFinished();
}


                /*MUUNNOKSEN NOSTO*/
void MainWindow::on_pushButton_11_nostaMuunnos_clicked()
{
    QString debitCreditParam; //parametrimuuttuja millä tarkistetaan käytetäänkö debittiä vai kredittiä

    QString IDparam = "1";
    QString IBANPar = "FI1234";

    if(pankkiVisa == 1)
    {
        debitCreditParam = "BalanceDebit";
    }
    if(pankkiVisa == 2)
    {
        debitCreditParam = "BalanceCredit";
    }

    if(db.updateBalance(muunnos, debitCreditParam, 1, IDparam, IBANPar))      //kutsutaan connectlib dll funktiota, kolmanneksi viimeinen parametri kertoo funktiolle että
                                                                //kyseessä on nosto
    {
        qDebug() << "MENI LÄPI";
        QMessageBox::information(this, "Nosto suoritettu", "Kiitos asioinnista!"); //Noston jälkeinen viesti
    }
    else{
        qDebug() << "EI MENNY LÄPI";
        QMessageBox::critical(this, "Tilillä ei katetta", "Tilillä ei riittävästi katetta, yritä uudelleen."); //ei katetta viesti
    }


    ui->stackedWidget->setCurrentIndex(2); //Palauttaa päävalikkoon, kun viesti suljetaan
}

void MainWindow::RFIDKoppi(QString RFID)
{
    qDebug() << RFID;

    if(db.checkRFID(RFID))
    {
        rfidOikein = 1;
        emit showMWsignal();
    }
    else{
        rfidOikein = 0;
    }

}

void MainWindow::showMWSlot()
{
    this->show();
}

bool MainWindow::showMW()
{
    if (rfidOikein == 1)
    {
        qDebug() << "jee";
        return true;
    }
    else
        return false;
}
