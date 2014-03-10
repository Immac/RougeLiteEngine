#ifndef COMPOSITION_H
#define COMPOSITION_H
#include <SFML/Graphics.hpp>
#include <QVector>
class Composition : public sf::Drawable
{

public:
    explicit Composition();
    void push_back(sf::Drawable *drawable);
    void push_front(sf::Drawable *drawable);
private:
    QVector<sf::Drawable *> composition;
    // Drawable interface
protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif // COMPOSITION_H
