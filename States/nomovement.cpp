#include "nomovement.h"

NoMovement::NoMovement()
{
}

void NoMovement::handleInput(GameObject &object, IInput *input, int stateIndex)
{

}

void NoMovement::update(GameObject &object)
{
    object.animate();
}
