#include "vmoveidle.h"

VMoveIdle::VMoveIdle()
{
}

int VMoveIdle::handleInput(GameObject &object, IInput *input)
{

    if(input->isUp())
    {
        return 1;
    }

    if(input->isDown())
    {
        return 2;
    }
    return 0;
}

int VMoveIdle::update(GameObject &object)
{
    return 0;
}
