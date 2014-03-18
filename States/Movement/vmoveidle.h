#ifndef VMOVEIDLE_H
#define VMOVEIDLE_H
#include "States/istate.h"

class VMoveIdle:public IState
{
public:
    VMoveIdle();

    // IState interface
public:
    int handleInput(GameObject &object, IInput *input);
    int update(GameObject &object);
};

#endif // VMOVEIDLE_H
