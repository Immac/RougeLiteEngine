#include "hmoveright.h"


HMoveRight::HMoveRight()
{
}

void HMoveRight::handleInput(GameObject &object, IInput *input, int stateIndex)
{
    if(!input->isRight())
    {
        object.setState(&MovementStates::horizontalIdle,stateIndex);
    }

}

void HMoveRight::update(GameObject &object)
{
    object.move(1,0);
}
