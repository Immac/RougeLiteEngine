#include "vmoverdown.h"

VMoveDown::VMoveDown()
{
}

int VMoveDown::handleInput(GameObject &object, IInput *input)
{
    if(!input->isDown())
    {
        return 1;
    }
    return 0;
}

int VMoveDown::update(GameObject &object)
{
    object.animate();
    object.move(0,1);
    return 0;
}
