#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <SFML/Graphics.hpp>
#include "Graphics/igraphic.h"
#include "States/istate.h"
#include "Inputs/iinput.h"
#include "States/statemachine.h"
#include <QList>

class StateMachine;
class IInput;
class IGraphic;
class IState;

class GameObject:public sf::Transformable
{

public:
    explicit GameObject(IInput *input, IGraphic *graphics);
    ~GameObject();

    virtual void handleInput();
    virtual void update();
    virtual void animate();
    virtual void render();
    virtual void addStateMachine(StateMachine *state);


protected:
    IGraphic *graphics;
    IInput *input;
    QList<StateMachine *> stateMachines;
    //Flags

    //TODO: Object Interaction
};

#endif // GAMEOBJECT_H
