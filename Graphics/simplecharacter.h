#ifndef SIMPLECHARACTER_H
#define SIMPLECHARACTER_H
#include "igraphic.h"

class SimpleCharacter : public IGraphic
{
public:
    SimpleCharacter();


    // IGraphic interface
public:
    sf::Drawable *getSprite(GameObject &object);

    void setGraphic(sf::Drawable *value);

private:
    sf::Drawable *graphic;


};

#endif // SIMPLECHARACTER_H
