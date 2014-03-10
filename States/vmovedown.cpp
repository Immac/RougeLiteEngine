#include "vmovedown.h"

VMoveDown::VMoveDown()
{
}

void VMoveDown::handleInput(GameObject &object, IInput *input, int stateIndex)
{
    if(!input->isDown())
    {
        object.setState(&MovementStates::verticalIdle,stateIndex);
    }
}

void VMoveDown::update(GameObject &object)
{
    //temporary
    object.move(0,1);
}
