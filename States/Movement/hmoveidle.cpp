#include "hmoveidle.h"

HMoveIdle::HMoveIdle()
{
}

int HMoveIdle::handleInput(GameObject &object, IInput *input)
{
    if(input->isLeft())
    {
        return 1;
    }

    if(input->isRight())
    {
        return 2;
    }
    return 0;
}

int HMoveIdle::update(GameObject &object)
{
    return 0;
}
