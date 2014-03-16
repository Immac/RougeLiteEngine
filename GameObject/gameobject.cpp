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
       states[i]->handleInput(*this,input,i);
    }
}

void GameObject::render()
{
    graphics->render(*this);
}

void GameObject::update()
{
    for (int i = 0; i < states.size(); i++) {
       states[i]->update(*this);
    }
    graphics->update(*this);
}

void GameObject::render()
{
    graphics->render(*this);
}

void GameObject::addState(IState *state)
{
    states.push_back(state);
}

void GameObject::setState(IState *state, int i)
{
    states[i] = state;
}







