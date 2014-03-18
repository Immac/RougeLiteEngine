#ifndef STATEMACHINE_H
#define STATEMACHINE_H
#include "States/istate.h"
#include <QList>


class StateMachine
{
public:
    StateMachine();
    void addState(IState &newState);
    void handleInput(GameObject &object,IInput *input);
    void update(GameObject &object);
private:
    void linkStates(int fromStateIndex,int exitStateIndex,int exitNumber);
    QList<IState *> machineStates;

    int activeState;
};


#endif // STATEMACHINE_H
