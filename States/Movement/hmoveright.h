#ifndef HMOVERIGHT_H
#define HMOVERIGHT_H
#include "States/istate.h"
class HMoveRight :public IState
{
public:
    HMoveRight();

    // IState interface
public:
    int handleInput(GameObject &object, IInput *input);
    int update(GameObject &object);
};

#endif // HMOVERIGHT_H
