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
    States/vmovestate.cpp \
    testcreator.cpp \
    States/staticstates.cpp \
    States/vmoveup.cpp \
    States/vmovedown.cpp \
    States/hmovestate.cpp \
    States/hmoveright.cpp \
    States/hmoveleft.cpp \
    States/nomovement.cpp \
    States/AutoBehavior/bobidle.cpp \
    States/AutoBehavior/animationstates.cpp \
    States/AutoBehavior/bobanimate.cpp \
    Graphics/simplecharacter.cpp \
    Graphics/compositecharacter.cpp \
    Graphics/ianimation.cpp

HEADERS += \
    game.h \
    gamescene.h \
    composition.h \
    gameobject.h \
    States/state.h \
    Inputs/iinput.h \
    GameObject/gameobject.h \
    Isnputs/keyboardinput.h \
    Inputs/keyboardinput.h \
    States/vmovestate.h \
    testcreator.h \
    States/staticstates.h \
    States/vmoveup.h \
    States/vmovedown.h \
    States/hmovestate.h \
    States/hmoveright.h \
    States/hmoveleft.h \
    States/nomovement.h \
    States/AutoBehavior/bobidle.h \
    States/AutoBehavior/animationstates.h \
    States/AutoBehavior/bobanimate.h \
    Graphics/compositecharacter.h \
    Graphics/simplecharacter.h \
    Graphics/igraphic.h \
    Graphics/ianimation.h
