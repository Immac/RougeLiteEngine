#ifndef VMOVERDOWN_H
#define VMOVERDOWN_H
#include "States/istate.h"

class VMoveDown:public IState
{
public:
    VMoveDown();

    // IState interface
public:
    int handleInput(GameObject &object, IInput *input);
    int update(GameObject &object);
};

#endif // VMOVERDOWN_H
