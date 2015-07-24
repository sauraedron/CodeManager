#-------------------------------------------------
#
# Project created by QtCreator 2015-07-23T21:55:53
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CodeM
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    addentry.cpp \
    entry.cpp

HEADERS  += mainwindow.h \
    addentry.h \
    entry.h

FORMS    += mainwindow.ui \
    addentry.ui
