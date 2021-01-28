/********************************************************************************
** Form generated from reading UI file 'rfidmoottori.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RFIDMOOTTORI_H
#define UI_RFIDMOOTTORI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_RFIDmoottori
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *RFIDmoottori)
    {
        if (RFIDmoottori->objectName().isEmpty())
            RFIDmoottori->setObjectName(QStringLiteral("RFIDmoottori"));
        RFIDmoottori->resize(407, 355);
        label = new QLabel(RFIDmoottori);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 90, 121, 61));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label_2 = new QLabel(RFIDmoottori);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 160, 201, 61));
        label_2->setFont(font);

        retranslateUi(RFIDmoottori);

        QMetaObject::connectSlotsByName(RFIDmoottori);
    } // setupUi

    void retranslateUi(QDialog *RFIDmoottori)
    {
        RFIDmoottori->setWindowTitle(QApplication::translate("RFIDmoottori", "Banksim", Q_NULLPTR));
        label->setText(QApplication::translate("RFIDmoottori", "Tervetuloa!", Q_NULLPTR));
        label_2->setText(QApplication::translate("RFIDmoottori", "Sy\303\266t\303\244 kortti", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RFIDmoottori: public Ui_RFIDmoottori {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RFIDMOOTTORI_H
