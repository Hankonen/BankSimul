#include "uimoottori.h"
#include "ui_uimoottori.h"

UIMoottori::UIMoottori(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UIMoottori)
{
    ui->setupUi(this);

}

UIMoottori::~UIMoottori()
{


    delete ui;

}

QString UIMoottori::valitaPin()
{
    return syotettyLuku;
}
void UIMoottori::on_pushButton_clicked()
{
    salattuPin = salattuPin + "*";
    syotettyLuku =syotettyLuku+ "0";
    ui->labelPin->setText(salattuPin);
    qDebug() << "0";

}


void UIMoottori::on_pushButton_1_clicked()
{
    salattuPin = salattuPin + "*";
    syotettyLuku =syotettyLuku+ "1";
    ui->labelPin->setText(salattuPin);
    qDebug() << "1";

}

void UIMoottori::on_pushButton_2_clicked()
{
    salattuPin = salattuPin + "*";
    syotettyLuku =syotettyLuku+ "2";
    ui->labelPin->setText(salattuPin);
    qDebug() << "2";

}

void UIMoottori::on_pushButton_3_clicked()
{
    salattuPin = salattuPin + "*";
    syotettyLuku =syotettyLuku+ "3";
    ui->labelPin->setText(salattuPin);
    qDebug() << "3";

}

void UIMoottori::on_pushButton_4_clicked()
{
    salattuPin = salattuPin + "*";
    syotettyLuku =syotettyLuku+ "4";
    ui->labelPin->setText(salattuPin);
    qDebug() << "4";

}

void UIMoottori::on_pushButton_5_clicked()
{
    salattuPin = salattuPin + "*";
    syotettyLuku =syotettyLuku+ "5";
    ui->labelPin->setText(salattuPin);
    qDebug() << "5";
}

void UIMoottori::on_pushButton_6_clicked()
{
    salattuPin = salattuPin + "*";
    syotettyLuku =syotettyLuku+ "6";
    ui->labelPin->setText(salattuPin);
    qDebug() << "6";
}

void UIMoottori::on_pushButton_7_clicked()
{
    salattuPin = salattuPin + "*";
    syotettyLuku =syotettyLuku+ "7";
    ui->labelPin->setText(salattuPin);
    qDebug() << "7";
}

void UIMoottori::on_pushButton_8_clicked()
{
    salattuPin = salattuPin + "*";
    syotettyLuku =syotettyLuku+ "8";
    ui->labelPin->setText(salattuPin);;
    qDebug() << "8";
}

void UIMoottori::on_pushButton_9_clicked()
{
    salattuPin = salattuPin + "*";
    syotettyLuku =syotettyLuku+ "9";
    ui->labelPin->setText(salattuPin);
    qDebug() << "9";
}

void UIMoottori::on_pushButtonOk_clicked()
{
    qDebug () << syotettyLuku;


    this->close();

}

void UIMoottori::on_pushButtonClear_clicked()
{
    salattuPin ="";
    syotettyLuku = "";
    ui->labelPin->setText(salattuPin);
}

void UIMoottori::on_pushButtonErase_clicked()
{
    salattuPin = salattuPin.remove(salattuPin.length()-1,1);
    syotettyLuku = syotettyLuku.remove(syotettyLuku.length()-1, 1);
    qDebug()<< syotettyLuku.length() << salattuPin.length();
    ui->labelPin->setText(salattuPin);

}
