#include "simplecharacter.h"

SimpleCharacter::SimpleCharacter()
{

}

sf::Drawable *SimpleCharacter::getSprite(GameObject &object)
{
    return graphic;
}


void SimpleCharacter::setGraphic(sf::Drawable *value)
{
    graphic = value;
}

