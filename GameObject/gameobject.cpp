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
    for (int i = 0; i < states.size(); i++)
    {
       states[i]->handleInput(*this,input);
    }
}

void GameObject::render()
{
    graphics->render(*this);
}

void GameObject::addStateMachine(StateMachine *state)
{
    states.append(state);
}

void GameObject::update()
{
    for (int i = 0; i < states.size(); i++) {
       states[i]->update(*this);
    }
}

void GameObject::animate()
{
    graphics->update(*this);
}






