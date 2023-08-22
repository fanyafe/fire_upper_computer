#-------------------------------------------------
#
# Project created by QtCreator 2022-08-17T19:55:58
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tcp_shangweiji2
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    pythonthread.cpp \
    login.cpp

HEADERS  += widget.h \
    pythonthread.h \
    login.h

FORMS    += widget.ui \
    login.ui


