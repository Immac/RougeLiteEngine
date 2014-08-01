#include "gameobject.h"

GameObject::GameObject(IInput *input, IGraphic *graphics)
{
    this->input = input;
    this->graphics = graphics;
}

GameObject::~GameObject()
{
    delete graphics;
}


void GameObject::handleInput()
{
    for (int i = 0; i < stateMachines.size(); i++)
       stateMachines[i]->handleInput(*this,input);
}

void GameObject::render()
{
    graphics->render(*this);
}

void GameObject::addStateMachine(StateMachine *state)
{
    stateMachines.append(state);
}

void GameObject::update()
{
    for (int i = 0; i < stateMachines.size(); i++)
       stateMachines[i]->update(*this);
}

void GameObject::animate()
{
    graphics->update(*this);
}






