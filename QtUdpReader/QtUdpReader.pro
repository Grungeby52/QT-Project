#-------------------------------------------------
#
# Project created by QtCreator 2018-05-14T10:05:47
#
#-------------------------------------------------

QT       += core
QT       += network
QT       -= gui

TARGET = QtUdpReader
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    readudp.cpp

HEADERS += \
    readudp.h \
    cipamdatatypes.h
