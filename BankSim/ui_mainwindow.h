/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_7;
    QLabel *label_8;
    QPushButton *pushButton_12Syotapin;
    QWidget *page_8;
    QPushButton *pushButton_pankki;
    QPushButton *pushButton_visa;
    QWidget *page;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *page_2;
    QLabel *label_2;
    QLabel *label_5;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_nostoSum;
    QPushButton *pushButton_nosta;
    QWidget *page_3;
    QLabel *label_3;
    QLabel *label_6;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_pano;
    QPushButton *pushButton_pano;
    QWidget *page_4;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_11_nostaMuunnos;
    QPushButton *pushButton_12Muunna;
    QLabel *label_14;
    QLabel *label_12muunos;
    QWidget *page_5;
    QLabel *label_9;
    QTableView *tableView_saldo;
    QWidget *page_6;
    QLabel *label_10;
    QTableView *transactionTableView;
    QWidget *page_13;
    QLabel *label_11;
    QLineEdit *lineEdit_SaajanTNro;
    QLineEdit *lineEdit_MaksunSum;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *pushButton_maksa;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(414, 356);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 401, 261));
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        label_8 = new QLabel(page_7);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 50, 181, 16));
        pushButton_12Syotapin = new QPushButton(page_7);
        pushButton_12Syotapin->setObjectName(QStringLiteral("pushButton_12Syotapin"));
        pushButton_12Syotapin->setGeometry(QRect(160, 140, 80, 21));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        pushButton_pankki = new QPushButton(page_8);
        pushButton_pankki->setObjectName(QStringLiteral("pushButton_pankki"));
        pushButton_pankki->setGeometry(QRect(90, 130, 80, 21));
        pushButton_visa = new QPushButton(page_8);
        pushButton_visa->setObjectName(QStringLiteral("pushButton_visa"));
        pushButton_visa->setGeometry(QRect(230, 130, 80, 21));
        stackedWidget->addWidget(page_8);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(35, 20, 341, 211));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_2->addWidget(pushButton_6, 2, 2, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 20, 161, 41));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 120, 141, 16));
        layoutWidget1 = new QWidget(page_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 170, 216, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_nostoSum = new QLineEdit(layoutWidget1);
        lineEdit_nostoSum->setObjectName(QStringLiteral("lineEdit_nostoSum"));

        horizontalLayout_2->addWidget(lineEdit_nostoSum);

        pushButton_nosta = new QPushButton(layoutWidget1);
        pushButton_nosta->setObjectName(QStringLiteral("pushButton_nosta"));

        horizontalLayout_2->addWidget(pushButton_nosta);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 20, 161, 41));
        label_3->setFont(font1);
        label_6 = new QLabel(page_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 120, 131, 16));
        layoutWidget2 = new QWidget(page_3);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(100, 170, 216, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_pano = new QLineEdit(layoutWidget2);
        lineEdit_pano->setObjectName(QStringLiteral("lineEdit_pano"));

        horizontalLayout_3->addWidget(lineEdit_pano);

        pushButton_pano = new QPushButton(layoutWidget2);
        pushButton_pano->setObjectName(QStringLiteral("pushButton_pano"));

        horizontalLayout_3->addWidget(pushButton_pano);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 20, 211, 41));
        label_4->setFont(font1);
        comboBox = new QComboBox(page_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(110, 130, 181, 22));
        label_7 = new QLabel(page_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 90, 161, 16));
        lineEdit_3 = new QLineEdit(page_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 160, 181, 22));
        pushButton_11_nostaMuunnos = new QPushButton(page_4);
        pushButton_11_nostaMuunnos->setObjectName(QStringLiteral("pushButton_11_nostaMuunnos"));
        pushButton_11_nostaMuunnos->setGeometry(QRect(223, 220, 91, 21));
        pushButton_12Muunna = new QPushButton(page_4);
        pushButton_12Muunna->setObjectName(QStringLiteral("pushButton_12Muunna"));
        pushButton_12Muunna->setGeometry(QRect(110, 220, 80, 21));
        label_14 = new QLabel(page_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(110, 190, 71, 20));
        label_12muunos = new QLabel(page_4);
        label_12muunos->setObjectName(QStringLiteral("label_12muunos"));
        label_12muunos->setGeometry(QRect(160, 190, 51, 21));
        label_12muunos->setFrameShape(QFrame::Box);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        label_9 = new QLabel(page_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(180, 20, 71, 41));
        label_9->setFont(font1);
        tableView_saldo = new QTableView(page_5);
        tableView_saldo->setObjectName(QStringLiteral("tableView_saldo"));
        tableView_saldo->setGeometry(QRect(20, 60, 371, 192));
        tableView_saldo->setEditTriggers(QAbstractItemView::NoEditTriggers);
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        label_10 = new QLabel(page_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(110, 20, 181, 41));
        label_10->setFont(font1);
        transactionTableView = new QTableView(page_6);
        transactionTableView->setObjectName(QStringLiteral("transactionTableView"));
        transactionTableView->setGeometry(QRect(5, 70, 391, 161));
        transactionTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        stackedWidget->addWidget(page_6);
        page_13 = new QWidget();
        page_13->setObjectName(QStringLiteral("page_13"));
        label_11 = new QLabel(page_13);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(130, 20, 151, 41));
        label_11->setFont(font1);
        lineEdit_SaajanTNro = new QLineEdit(page_13);
        lineEdit_SaajanTNro->setObjectName(QStringLiteral("lineEdit_SaajanTNro"));
        lineEdit_SaajanTNro->setGeometry(QRect(10, 110, 171, 21));
        lineEdit_MaksunSum = new QLineEdit(page_13);
        lineEdit_MaksunSum->setObjectName(QStringLiteral("lineEdit_MaksunSum"));
        lineEdit_MaksunSum->setGeometry(QRect(200, 110, 101, 21));
        label_12 = new QLabel(page_13);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 80, 131, 21));
        label_13 = new QLabel(page_13);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(200, 80, 121, 20));
        pushButton_maksa = new QPushButton(page_13);
        pushButton_maksa->setObjectName(QStringLiteral("pushButton_maksa"));
        pushButton_maksa->setGeometry(QRect(130, 190, 80, 21));
        stackedWidget->addWidget(page_13);
        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(130, 270, 168, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(layoutWidget3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout->addWidget(pushButton_8);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        stackedWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 414, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Kortti tunnistettu! Sy\303\266t\303\244 pinkoodisi!", Q_NULLPTR));
        pushButton_12Syotapin->setText(QApplication::translate("MainWindow", "Sy\303\266t\303\244 Pin", Q_NULLPTR));
        pushButton_pankki->setText(QApplication::translate("MainWindow", "Pankki", Q_NULLPTR));
        pushButton_visa->setText(QApplication::translate("MainWindow", "Visa", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "BankSim", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Nosta rahaa", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Talleta rahaa", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Vaihda valuuttaa", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Saldo", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Tilitapahtumat", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Maksa lasku", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Nosta rahaa", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Sy\303\266t\303\244 nostettava summa", Q_NULLPTR));
        pushButton_nosta->setText(QApplication::translate("MainWindow", "Nosta", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Talleta rahaa", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Sy\303\266t\303\244 talletettava summa", Q_NULLPTR));
        pushButton_pano->setText(QApplication::translate("MainWindow", "Talleta", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Vaihda Valuuttaa", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Kruunu", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Punta", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Dollari", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Rupla", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("MainWindow", "Valitse valuutta ja sy\303\266t\303\244 summa", Q_NULLPTR));
        pushButton_11_nostaMuunnos->setText(QApplication::translate("MainWindow", "Nosta", Q_NULLPTR));
        pushButton_12Muunna->setText(QApplication::translate("MainWindow", "Muunna", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Euroina:", Q_NULLPTR));
        label_12muunos->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Saldo", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Tilitapahtumat", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Maksa lasku", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Maksun saajan tilinro", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Maksun summa (\342\202\254)", Q_NULLPTR));
        pushButton_maksa->setText(QApplication::translate("MainWindow", "Maksa lasku", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Kirjaudu ulos", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Palaa alkuun", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
