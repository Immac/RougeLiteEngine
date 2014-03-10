#include "keyboardinput.h"

KeyboardInput::KeyboardInput()
{
}

bool KeyboardInput::isUp()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::W);
}

bool KeyboardInput::isDown()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::S);
}

bool KeyboardInput::isLeft()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::A);
}

bool KeyboardInput::isRight()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::D);
}

bool KeyboardInput::isAttackUp()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Up);
}

bool KeyboardInput::isAttackDown()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Down);
}

bool KeyboardInput::isAttackLeft()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Left);
}

bool KeyboardInput::isAttackRight()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Right);
}

bool KeyboardInput::isButton1()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Q);
}

bool KeyboardInput::isButton2()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::E);
}

bool KeyboardInput::isButton3()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Space);
}

bool KeyboardInput::isButton4()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Return);
}

bool KeyboardInput::isButton5()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Tab);
}

bool KeyboardInput::isButton6()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::R);
}

bool KeyboardInput::isButton7()
{
    return false;
}

bool KeyboardInput::isButton8()
{
    return false;
}

bool KeyboardInput::isButton9()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Escape);
}

bool KeyboardInput::isButton10()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Return);
}

bool KeyboardInput::isButton11()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Escape);
}

bool KeyboardInput::isButton12()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Escape);
}
