#include "bobanimate.h"

BobAnimate::BobAnimate()
{
    currentCycle = 0;
    bool reset = false;
}

void BobAnimate::handleInput(GameObject &object, IInput *input, int stateIndex)
{
    if(!input->isDown() || !input->isLeft() || !input->isRight() || !input->isUp())
    {
       object.setState(&AnimationStates::bobbingIdle,stateIndex);
    }
}

void BobAnimate::update(GameObject &object)
{
    object.setOrigin(12,12);
    object.rotate(15);
}
