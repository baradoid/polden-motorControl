#-------------------------------------------------
#
# Project created by QtCreator 2017-05-01T05:22:59
#
#-------------------------------------------------

QT       += core gui

QT += serialport
QT += network

# CONFIG += qwt

QMAKE_LFLAGS_RELEASE += -static -static-libgcc

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = motor-control
TEMPLATE = app

RC_ICONS = favicon.ico
# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    uartthread.cpp \
    fpgacontrol.cpp \    
    cpowermanager.cpp
    #leadshinedebugport.cpp \

HEADERS  += mainwindow.h \
    UartThread \
    UartThread \
    uartthread.h \
    stand.h \
    fpgacontrol.h \
    cpowermanager.h
    #leadshinedebugport.h \

FORMS    += mainwindow.ui

# include ( C:\Qwt-6.1.3\features\qwt.prf )

RESOURCES += \
    res.qrc


