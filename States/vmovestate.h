#ifndef VMOVESTATE_H
#define VMOVESTATE_H
#include "States/state.h"
#include "staticstates.h"

class VMoveState:public IState
{
public:
    VMoveState();

    // IState interface
public:

    void update(GameObject &object);
    void handleInput(GameObject &object, IInput *input, int stateIndex);
};

#endif // VMOVESTATE_H
