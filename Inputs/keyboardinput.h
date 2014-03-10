#ifndef KEYBOARDINPUT_H
#define KEYBOARDINPUT_H
#include "iinput.h"
#include "SFML/Window/Keyboard.hpp"

class KeyboardInput:public IInput
{
public:
    KeyboardInput();


    // IInput interface
public:
    bool isUp();
    bool isDown();
    bool isLeft();
    bool isRight();

    bool isAttackUp();
    bool isAttackDown();
    bool isAttackLeft();
    bool isAttackRight();

    bool isButton1();
    bool isButton2();
    bool isButton3();
    bool isButton4();

    bool isButton5();
    bool isButton6();
    bool isButton7();
    bool isButton8();

    bool isButton9();
    bool isButton10();
    bool isButton11();
    bool isButton12();
};

#endif // KEYBOARDINPUT_H
