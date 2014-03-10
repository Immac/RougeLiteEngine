#ifndef VMOVEUP_H
#define VMOVEUP_H
#include "staticstates.h"
#include "state.h"
class VMoveUp: public IState
{
public:
    VMoveUp();

    // IState interface
public:
    void handleInput(GameObject &object, IInput *input,int stateIndex);
    void update(GameObject &object);

};

#endif // VMOVEUP_H
