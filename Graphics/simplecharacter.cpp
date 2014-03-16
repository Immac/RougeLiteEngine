#include "simplecharacter.h"


SimpleCharacter::SimpleCharacter(sf::RenderTarget &renderTarget)
{
    this->renderTarget = &renderTarget;
}

void SimpleCharacter::update(GameObject &object)
{

}

void SimpleCharacter::render(GameObject &object)
{
    renderTarget->draw(*sprite,transformation);
}
sf::Drawable *SimpleCharacter::getSprite() const
{
    return sprite;
}

void SimpleCharacter::setSprite(sf::Drawable *value)
{
    sprite = value;
}
sf::Transform SimpleCharacter::getTransform() const
{
    return transformation;
}

void SimpleCharacter::setTransform(sf::Transform value)
{
    transformation = value;
}


