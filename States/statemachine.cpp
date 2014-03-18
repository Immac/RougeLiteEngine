#include "statemachine.h"

StateMachine::StateMachine()
{
}

void StateMachine::addState(IState &newState)
{
    if(!machineStates.contains(&newState))
    {
        machineStates.push_back(&newState);
    }

}

void StateMachine::handleInput(GameObject &object, IInput *input)
{
    machineStates[activeState]->handleInput(object,input);
}

void StateMachine::update(GameObject &object)
{
    machineStates[activeState]->update(object);
}

void StateMachine::linkStates(int fromStateIndex, int exitStateIndex, int exitNumber)
{
    machineStates[fromStateIndex]->linkExit(machineStates[exitStateIndex],exitNumber);
}
