#-------------------------------------------------
#
# Project created by QtCreator 2014-07-19T23:23:26
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = ZipUnzipTool
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

include($$PWD/zipunzip.pri)

SOURCES += main.cpp \
    zipunzip/zipunzip.cpp

HEADERS += \
    zipunzip/zipunzip.h

