#include "rfidmoottori.h"
#include "ui_rfidmoottori.h"

RFIDmoottori::RFIDmoottori(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RFIDmoottori)
{
    ui->setupUi(this);
}

RFIDmoottori::~RFIDmoottori()
{
    delete ui;
}
