#ifndef HMOVERIGHT_H
#define HMOVERIGHT_H
#include "States/istate.h"
#include "States/staticstates.h"

class HMoveRight: public IState
{
public:
    HMoveRight();

    // IState interface
public:
    void handleInput(GameObject &object, IInput *input, int stateIndex);
    void update(GameObject &object);
};

#endif // HMOVERIGHT_H
