#-------------------------------------------------
#
# Project created by QtCreator 2014-03-07T01:25:02
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = RougeLiteEngine
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

INCLUDEPATH += C:\\SFML2.1\\include

LIBS += C:\\SFML2.1\\lib\\libsfml-system.a\
C:\\SFML2.1\\lib\\libsfml-window.a\
C:\\SFML2.1\\lib\\libsfml-graphics.a\
C:\\SFML2.1\\lib\\libsfml-audio.a\
C:\\SFML2.1\\lib\\libsfml-network.a\

DEFINES += SFML_STATIC

QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp \
    game.cpp \
    gamescene.cpp \
    composition.cpp \
    GameObject/gameobject.cpp \
    Inputs/keyboardinput.cpp \
    Graphics/animation.cpp \
    Graphics/animatedgraphics.cpp \
    States/statemachine.cpp \
    States/Movement/vmoveidle.cpp \
    States/Movement/vmoveup.cpp \
    States/Movement/vmoverdown.cpp \
    States/Movement/hmoveidle.cpp \
    States/Movement/hmoveleft.cpp \
    States/Movement/hmoveright.cpp \
    States/Movement/movestate.cpp

HEADERS += \
    game.h \
    gamescene.h \
    composition.h \
    gameobject.h \
    Inputs/iinput.h \
    GameObject/gameobject.h \
    Isnputs/keyboardinput.h \
    Inputs/keyboardinput.h \
    Graphics/igraphic.h \
    States/istate.h \
    Graphics/animation.h \
    Graphics/animatedgraphics.h \
    States/statemachine.h \
    States/Movement/vmoveidle.h \
    States/Movement/vmoveup.h \
    States/Movement/vmoverdown.h \
    States/Movement/hmoveidle.h \
    States/Movement/hmoveleft.h \
    States/Movement/hmoveright.h \
    States/Movement/movestate.h
