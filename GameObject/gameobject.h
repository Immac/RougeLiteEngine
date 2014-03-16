#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <SFML/Graphics.hpp>
#include "Graphics/igraphic.h"
#include "States/istate.h"
#include "Inputs/iinput.h"
#include <QList>

class IInput;
class IGraphic;
class IState;

class GameObject
{

public:
    explicit GameObject(IInput *input, IGraphic *graphics);
    ~GameObject();

    virtual void handleInput();
    virtual void update();
    virtual void render();

    virtual void addState(IState *state);
    virtual void setState(IState *state,int index);


protected:
    IGraphic *graphics;
    IInput *input;
    QList<IState *> states;
    //TODO: Object Interaction
};

#endif // GAMEOBJECT_H
