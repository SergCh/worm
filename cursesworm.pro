#-------------------------------------------------
#
# Project created by QtCreator 2018-05-03T15:06:40
#
#-------------------------------------------------

TARGET = cursesworm
TEMPLATE = app
CONFIG += console
CONFIG -= qt
CONFIG -= app_bundle

INCLUDEPATH += model curses
LIBS += -lncurses

SOURCES +=\
    model/src/Control.cpp \
    model/src/Model.cpp \
    model/src/Point.cpp \
    model/src/View.cpp \
    model/src/Way.cpp \
    model/src/RabbitFactory.cpp \
    model/src/Rabbit.cpp \
#    model/src/RabbitSimple.cpp \
    curses/src/CursesView.cpp \
    curses/main.cpp

HEADERS  += \
    version.h \
    model/Control.h \
    model/Model.h \
    model/Point.h \
    model/View.h \
    model/Way.h \
    model/RabbitFactory.h \
    model/Rabbit.h \
#    model/src/RabbitSimple.h \
    curses/CursesView.h \
    curses/CursesVersion.h
