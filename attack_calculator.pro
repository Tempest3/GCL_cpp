#-------------------------------------------------
#
# Project created by QtCreator 2013-04-23T06:03:55
#
#-------------------------------------------------

QT       += core gui sql

TARGET = attack_calculator
TEMPLATE = app


SOURCES += main.cpp\
        attack_calculator.cpp \
    playership.cpp \
    shipweapon.cpp \
    researchlist.cpp \
    speciallist.cpp

HEADERS  += attack_calculator.h \
    playership.h \
    shipweapon.h \
    researchlist.h \
    speciallist.h

FORMS    += attack_calculator.ui

RESOURCES += \
    images.qrc
