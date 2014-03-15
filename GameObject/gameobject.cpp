#include "gameobject.h"

GameObject::GameObject(IInput *input, IGraphic *graphix)
{
    this->input = input;
    this->graphics = graphix;
}

GameObject::~GameObject()
{
    delete graphics;
}


void GameObject::handleInput()
{
    for (int i = 0; i < states.size(); i++) {
       states[i]->handleInput(*this,input,i);
    }
}

void GameObject::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    states.transform *= getTransform();

    target.draw(*mySprite,states);
}

void GameObject::update()
{
    for (int i = 0; i < states.size(); i++) {
       states[i]->update(*this);
    }
    graphics->updateSprite(*this);
}

void GameObject::addState(IState *state)
{
    states.push_back(state);
}

void GameObject::setState(IState *state, int i)
{
    states[i] = state;
}

sf::Drawable *GameObject::getMySprite() const
{
    return mySprite;
}

void GameObject::setMySprite(sf::Drawable *value)
{
    mySprite = value;
}







