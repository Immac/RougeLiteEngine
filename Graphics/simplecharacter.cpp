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
    sf::Transform transient;
    transient *= transformation;
    transient*= object.getTransform();
    renderTarget->draw(*sprite,transient);
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


