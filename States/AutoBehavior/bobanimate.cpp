#include "bobanimate.h"

BobAnimate::BobAnimate()
{
    currentCycle = 0;
    bool reset = false;
}

void BobAnimate::handleInput(GameObject &object, IInput *input, int stateIndex)
{
   /* if(!input->isDown() || !input->isLeft() || !input->isRight() || !input->isUp() || currentCycle == -11)
    {
        object.setVMoveState(&AnimationStates::bobbingIdle);
    }*/
}

void BobAnimate::update(GameObject &object)
{
    object.move(currentCycle,0);
    if(!reset)
        currentCycle++;
    else
        currentCycle--;
    if(currentCycle > 10)
        reset = true;
    if(currentCycle < -10)
        reset = true;
}
