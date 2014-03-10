#include "vmoveup.h"

VMoveUp::VMoveUp()
{
}

void VMoveUp::handleInput(GameObject &object, IInput *input, int stateIndex)
{
    if(!input->isUp())
    {
        object.setState(&MovementStates::verticalIdle,stateIndex);

    }
}

void VMoveUp::update(GameObject &object)
{
    //temporary
    object.move(0,-1);
}
