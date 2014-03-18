#include "vmoverdown.h"

VMoverDown::VMoverDown()
{
}

int VMoverDown::handleInput(GameObject &object, IInput *input)
{
    if(!input->isDown())
    {
        return 1;
    }
    return 0;
}

int VMoverDown::update(GameObject &object)
{
    object.animate();
    object.move(0,1);
    return 0;
}
