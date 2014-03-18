#include "statemachine.h"

StateMachine::StateMachine()
{
    activeState = EInput::Idle;
}

void StateMachine::addState(MachinableState &newState, EInput key)
{
    machineStates.insert(key,&newState);
}

void StateMachine::handleInput(GameObject &object, IInput *input)
{
    MachinableState *temporalState = machineStates.value(activeState);
    int exit = temporalState->state->handleInput(object,input);
    activeState = temporalState->Exits.value(exit);
}

void StateMachine::update(GameObject &object)
{
    MachinableState *temporalState = machineStates.value(activeState);
    int exit = temporalState->state->update(object);
    activeState = temporalState->Exits.value(exit);
}

