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
        part->update();
    }
    return sprite;
}

void CompositeCharacter::pushBackPart(GameObject *part)
{
    parts.push_back(part);
    Composition.push_back(part);
}

void CompositeCharacter::pushFrontPart(GameObject *part)
{
    parts.push_front(part);
    Composition.push_fron(part);
}
