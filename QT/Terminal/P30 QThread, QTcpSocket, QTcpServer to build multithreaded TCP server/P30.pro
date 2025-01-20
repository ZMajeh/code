#-------------------------------------------------
#
# Project created by QtCreator 2022-05-29T19:56:10
#
#-------------------------------------------------

QT       += core
QT       += network

QT       -= gui

TARGET = P30
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    mythread.cpp \
    myserver.cpp

HEADERS += \
    mythread.h \
    myserver.h
