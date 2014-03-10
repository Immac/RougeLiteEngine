#include "composition.h"

Composition::Composition()
{
}

void Composition::push_back(sf::Drawable *drawable)
{
    composition.push_back(drawable);
}

void Composition::push_front(sf::Drawable *drawable)
{
    composition.push_front(drawable);
}

void Composition::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    foreach (sf::Drawable* drawable, composition) {
        target.draw(*drawable,states);
    }
}
