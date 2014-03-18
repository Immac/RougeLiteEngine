#include "vmoveup.h"

VMoveUp::VMoveUp()
{
}

int VMoveUp::handleInput(GameObject &object, IInput *input)
{

    if(!input->isUp())
    {
        return 1;
    }
    return 0;
}

int VMoveUp::update(GameObject &object)
{
    object.animate();
    object.move(0,-1);
    return 0;
}
