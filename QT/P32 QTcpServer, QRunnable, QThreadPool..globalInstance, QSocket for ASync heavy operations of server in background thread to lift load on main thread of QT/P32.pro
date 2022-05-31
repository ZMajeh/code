#-------------------------------------------------
#
# Project created by QtCreator 2022-05-31T13:51:31
#
#-------------------------------------------------

QT       += core
QT       += network


QT       -= gui

TARGET = P32
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    myserver.cpp \
    myclient.cpp \
    myrunnable.cpp

HEADERS += \
    myserver.h \
    myclient.h \
    myrunnable.h
