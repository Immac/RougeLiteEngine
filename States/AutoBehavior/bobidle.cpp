#include "bobidle.h"

BobIdle::BobIdle()
{
}

void BobIdle::handleInput(GameObject &object, IInput *input, int stateIndex)
{
    if(input->isDown() || input->isLeft() || input->isRight() || input->isUp())
    {
        object.setState(&AnimationStates::bobbingAnimation,stateIndex);
    }
}

void BobIdle::update(GameObject &object)
{
    //Do nothing
}


