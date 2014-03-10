#ifndef HMOVESTATE_H
#define HMOVESTATE_H
#include "States/state.h"
#include "staticstates.h"

class HMoveState: public IState
{
public:
    HMoveState();

    // IState interface
public:
    void handleInput(GameObject &object, IInput *input, int stateIndex);
    void update(GameObject &object);
};

#endif // HMOVESTATE_H
