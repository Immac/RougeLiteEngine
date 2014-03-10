#include "vmovestate.h"

VMoveState::VMoveState()
{

}


void VMoveState::update(GameObject &object)
{

}

void VMoveState::handleInput(GameObject &object, IInput *input, int stateIndex)
{
    if(input->isUp())
    {
        object.setState(&MovementStates::verticalUp,stateIndex);
    }
    else if(input->isDown())
    {
        object.setState(&MovementStates::verticalDown,stateIndex);
    }
}
