#ifndef VMOVEDOWN_H
#define VMOVEDOWN_H
#include "staticstates.h"
#include "istate.h"

class VMoveDown: public IState
{
public:
    VMoveDown();

    // IState interface
public:
    void handleInput(GameObject &object, IInput *input, int stateIndex);
    void update(GameObject &object);

};

#endif // VMOVEDOWN_H
