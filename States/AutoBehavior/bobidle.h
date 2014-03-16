#ifndef BOBIDLE_H
#define BOBIDLE_H
#include "States/istate.h"
#include "States/AutoBehavior/animationstates.h"

class BobIdle: public IState
{
public:
    BobIdle();

    // IState interface
public:
    void handleInput(GameObject &object, IInput *input, int stateIndex);
    void update(GameObject &object);

};

#endif // BOBIDLE_H
