#include "hmoveleft.h"

HMoveLeft::HMoveLeft()
{
}

void HMoveLeft::handleInput(GameObject &object, IInput *input, int stateIndex)
{
    if(!input->isLeft()){
        object.setState(&MovementStates::horizontalIdle,stateIndex);
    }
}

void HMoveLeft::update(GameObject &object)
{
    object.move(-1,0);
}
