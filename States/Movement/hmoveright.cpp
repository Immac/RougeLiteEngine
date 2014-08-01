#include "hmoveright.h"

HMoveRight::HMoveRight()
{
}

int HMoveRight::handleInput(GameObject &object, IInput *input)
{
    if(!input->isRight())
    {
        return 1;
    }
    return 0;
}

int HMoveRight::update(GameObject &object)
{
    object.animate(); //TODO
    object.move(1,0); //TODO
    return 0;
}
