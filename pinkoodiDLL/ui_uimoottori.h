/********************************************************************************
** Form generated from reading UI file 'uimoottori.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIMOOTTORI_H
#define UI_UIMOOTTORI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UIMoottori
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonCancel;
    QLabel *labelPin;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButtonErase;
    QPushButton *pushButtonClear;

    void setupUi(QDialog *UIMoottori)
    {
        if (UIMoottori->objectName().isEmpty())
            UIMoottori->setObjectName(QStringLiteral("UIMoottori"));
        UIMoottori->resize(407, 350);
        pushButton = new QPushButton(UIMoottori);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 200, 80, 21));
        pushButton_1 = new QPushButton(UIMoottori);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(80, 110, 80, 21));
        pushButton_2 = new QPushButton(UIMoottori);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 110, 80, 21));
        pushButton_3 = new QPushButton(UIMoottori);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 110, 80, 21));
        pushButton_4 = new QPushButton(UIMoottori);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(80, 140, 80, 21));
        pushButtonOk = new QPushButton(UIMoottori);
        pushButtonOk->setObjectName(QStringLiteral("pushButtonOk"));
        pushButtonOk->setGeometry(QRect(290, 260, 80, 21));
        pushButtonCancel = new QPushButton(UIMoottori);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(40, 260, 80, 21));
        labelPin = new QLabel(UIMoottori);
        labelPin->setObjectName(QStringLiteral("labelPin"));
        labelPin->setGeometry(QRect(80, 70, 261, 21));
        labelPin->setFrameShape(QFrame::Box);
        pushButton_5 = new QPushButton(UIMoottori);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(170, 140, 80, 21));
        pushButton_6 = new QPushButton(UIMoottori);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(260, 140, 80, 21));
        pushButton_7 = new QPushButton(UIMoottori);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(80, 170, 80, 21));
        pushButton_8 = new QPushButton(UIMoottori);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(170, 170, 80, 21));
        pushButton_9 = new QPushButton(UIMoottori);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(260, 170, 80, 21));
        pushButtonErase = new QPushButton(UIMoottori);
        pushButtonErase->setObjectName(QStringLiteral("pushButtonErase"));
        pushButtonErase->setGeometry(QRect(260, 200, 80, 21));
        pushButtonClear = new QPushButton(UIMoottori);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));
        pushButtonClear->setGeometry(QRect(80, 200, 80, 21));

        retranslateUi(UIMoottori);

        QMetaObject::connectSlotsByName(UIMoottori);
    } // setupUi

    void retranslateUi(QDialog *UIMoottori)
    {
        UIMoottori->setWindowTitle(QApplication::translate("UIMoottori", "Sy\303\266t\303\244 pin", Q_NULLPTR));
        pushButton->setText(QApplication::translate("UIMoottori", "0", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("UIMoottori", "1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("UIMoottori", "2", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("UIMoottori", "3", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("UIMoottori", "4", Q_NULLPTR));
        pushButtonOk->setText(QApplication::translate("UIMoottori", "ok", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("UIMoottori", "Cancel", Q_NULLPTR));
        labelPin->setText(QString());
        pushButton_5->setText(QApplication::translate("UIMoottori", "5", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("UIMoottori", "6", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("UIMoottori", "7", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("UIMoottori", "8", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("UIMoottori", "9", Q_NULLPTR));
        pushButtonErase->setText(QApplication::translate("UIMoottori", "Erase", Q_NULLPTR));
        pushButtonClear->setText(QApplication::translate("UIMoottori", "Clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UIMoottori: public Ui_UIMoottori {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIMOOTTORI_H
