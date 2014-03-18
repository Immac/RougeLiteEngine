#ifndef HMOVELEFT_H
#define HMOVELEFT_H
#include "States/istate.h"

class HMoveLeft : public IState
{
public:
    HMoveLeft();

    // IState interface
public:
    int handleInput(GameObject &object, IInput *input);
    int update(GameObject &object);
};

#endif // HMOVELEFT_H
