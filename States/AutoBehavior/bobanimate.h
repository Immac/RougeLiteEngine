#ifndef BOBANIMATE_H
#define BOBANIMATE_H
#include "States/istate.h"
#include "animationstates.h"
class BobAnimate: public IState
{
public:
    BobAnimate();

    // IState interface
public:
    void handleInput(GameObject &object, IInput *input, int stateIndex);
    void update(GameObject &object);
private:
};

#endif // BOBANIMATE_H
