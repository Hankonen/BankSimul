#ifndef UIMOOTTORI_H
#define UIMOOTTORI_H

#include <QString>
#include <QDialog>
#include <QDebug>

namespace Ui {
class UIMoottori;
}

class UIMoottori : public QDialog
{
    Q_OBJECT

public:
    explicit UIMoottori(QWidget *parent = nullptr);
    ~UIMoottori();

    QString valitaPin();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButtonOk_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButtonClear_clicked();

    void on_pushButtonErase_clicked();

private:
    QString salattuPin;
    QString syotettyLuku;
    Ui::UIMoottori *ui;
};

#endif // UIMOOTTORI_H
