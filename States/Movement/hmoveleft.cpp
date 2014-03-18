#include "hmoveleft.h"

HMoveLeft::HMoveLeft()
{
}

int HMoveLeft::handleInput(GameObject &object, IInput *input)
{
    if(!input->isLeft())
    {
        return 1;
    }
    return 0;
}

int HMoveLeft::update(GameObject &object)
{
    object.animate();
    object.move(-1,0);
    return 0;
}
