#ifndef VMOVEUP_H
#define VMOVEUP_H
#include "States/istate.h"

class VMoveUp: public IState
{
public:
    VMoveUp();

    // IState interface
public:
    int handleInput(GameObject &object, IInput *input);
    int update(GameObject &object);
};

#endif // VMOVEUP_H
