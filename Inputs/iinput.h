#ifndef IINPUT_H
#define IINPUT_H

class IInput
{
public:
    virtual ~IInput(){}
    virtual bool isUp() = 0;
    virtual bool isDown() = 0;
    virtual bool isLeft() = 0;
    virtual bool isRight() = 0;

    virtual bool isAttackUp() = 0;
    virtual bool isAttackDown() = 0;
    virtual bool isAttackLeft() = 0;
    virtual bool isAttackRight() = 0;

    virtual bool isButton1() = 0;
    virtual bool isButton2() = 0;
    virtual bool isButton3() = 0;
    virtual bool isButton4() = 0;

    virtual bool isButton5() = 0;
    virtual bool isButton6() = 0;
    virtual bool isButton7() = 0;
    virtual bool isButton8() = 0;

    virtual bool isButton9() = 0;
    virtual bool isButton10() = 0;
    virtual bool isButton11() = 0;
    virtual bool isButton12() = 0;
};

#endif // IINPUT_H
