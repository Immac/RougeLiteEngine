#include "hmovestate.h"

HMoveState::HMoveState()
{
}

void HMoveState::handleInput(GameObject &object, IInput *input, int stateIndex)
{
    if(input->isRight())
    {
        object.setState(&MovementStates::horizontalRight,stateIndex);
    }
    else if (input->isLeft())
    {
        object.setState(&MovementStates::horizontalLeft,stateIndex);
    }
}

void HMoveState::update(GameObject &object)
{

}
