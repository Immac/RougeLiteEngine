#ifndef HMOVELEFT_H
#define HMOVELEFT_H
#include "States/state.h"
#include "States/staticstates.h"

class HMoveLeft: public IState
{
public:
    HMoveLeft();

    // IState interface
public:
    void handleInput(GameObject &object, IInput *input, int stateIndex);
    void update(GameObject &object);
};

#endif // HMOVELEFT_H
