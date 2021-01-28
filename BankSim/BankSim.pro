#-------------------------------------------------
#
# Project created by QtCreator 2020-04-09T11:54:53
#
#-------------------------------------------------

QT       +=  sql core gui serialport
win32:LIBS += "G:\Qtkoulu\BankSim_0.01\BankSim\pinkoodiDLL.dll"
win32:LIBS += "G:\Qtkoulu\BankSim_0.01\BankSim\connectlib.dll"
win32:LIBS += "G:\Qtkoulu\BankSim_0.01\BankSim\valuuttamuunninDLL.dll"
win32:LIBS += "G:\Qtkoulu\BankSim_0.01\BankSim\rfidDLL.dll"
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BankSim
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui
