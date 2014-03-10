#ifndef NOMOVEMENT_H
#define NOMOVEMENT_H
#include "States/state.h"
#include "staticstates.h"

class NoMovement:public IState
{
public:
    NoMovement();

    // IState interface
public:
    void handleInput(GameObject &object, IInput *input, int stateIndex);
    void update(GameObject &object);

};

#endif // NOMOVEMENT_H
