#include "simplecharacter.h"

SimpleCharacter::SimpleCharacter()
{

}

void SimpleCharacter::updateSprite(GameObject &object)
{
    object.setMySprite(graphic);
}


void SimpleCharacter::setGraphic(sf::Drawable *value)
{
    graphic = value;
}

