#-------------------------------------------------
#
# Project created by QtCreator 2014-08-30T22:05:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = nodgui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    MyFileWork.h

FORMS    += mainwindow.ui

LIBS += -lcrypto -lssl

LIBS += \
       -lboost_system\

LIBS += -Wl,--no-as-needed -lpthread

QMAKE_CXXFLAGS += -std=c++11 -pthread -Wpedantic -Wextra
LIBS += -lpthread
