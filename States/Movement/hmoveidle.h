#ifndef HMOVEIDLE_H
#define HMOVEIDLE_H
#include "States/istate.h"

class HMoveIdle : public IState
{
public:
    HMoveIdle();

    // IState interface
public:
    int handleInput(GameObject &object, IInput *input);
    int update(GameObject &object);
};

#endif // HMOVEIDLE_H
