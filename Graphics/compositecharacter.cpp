#include "compositecharacter.h"

CompositeCharacter::CompositeCharacter()
{
    sprite = new Composition;
}

CompositeCharacter::~CompositeCharacter()
{
    delete sprite;
    foreach (GameObject *obj, parts) {
        delete obj;
    }
}

sf::Drawable *CompositeCharacter::getSprite(GameObject &object)
{
    foreach (GameObject *part, parts) {
        part->handleInput();
        part->update();
    }
    return sprite;
}

void CompositeCharacter::pushBackPart(GameObject *part)
{
    parts.push_back(part);
    sprite->push_back(part);
}

void CompositeCharacter::pushFrontPart(GameObject *part)
{
    parts.push_front(part);
    sprite->push_front(part);
}
