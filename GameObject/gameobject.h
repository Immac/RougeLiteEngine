#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <SFML/Graphics.hpp>
#include "Graphics/igraphic.h"
#include "States/state.h"
#include "Inputs/iinput.h"
#include <QVector>

class IInput;
class IGraphic;
class IState;

class GameObject : public sf::Drawable, public sf::Transformable
{

public:
    explicit GameObject(IInput *input, IGraphic *graphix);
    ~GameObject();
    int baseSpeed = 0;

    void handleInput();
    void update();

    void addState(IState *state);
    void setState(IState *state,int index);

    //temporary

    //Accessors    
    sf::Drawable *getMySprite() const;
    void setMySprite(sf::Drawable *value);


    IGraphic *graphics;
private:
    IInput *input;
    QVector<IState *> states;
    sf::Drawable *mySprite;

    // Drawable interface
protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif // GAMEOBJECT_H
