#ifndef SIMPLECHARACTER_H
#define SIMPLECHARACTER_H
#include "igraphic.h"
#include <SFML/Graphics.hpp>

class SimpleCharacter : public IGraphic
{
public:
    SimpleCharacter(sf::RenderTarget &renderTarget);
    // IGraphic interface
public:
    void update(GameObject &object);
    void render(GameObject &object);

    //Accessors
    sf::Drawable *getSprite() const;
    void setSprite(sf::Drawable *value);

    sf::Transform getTransform() const;
    void setTransform(sf::Transform value);

private:
    sf::RenderTarget *renderTarget;
    sf::Drawable *sprite;
    sf::Transform transformation;

};

#endif // SIMPLECHARACTER_H
