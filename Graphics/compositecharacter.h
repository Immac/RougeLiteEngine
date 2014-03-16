#ifndef ANIMATEDCHARACTER_H
#define ANIMATEDCHARACTER_H
#include "igraphic.h"
#include "SFML/Graphics.hpp"
#include "GameObject/gameobject.h"
#include <QList>
#include "composition.h"

class CompositeCharacter:public IGraphic
{
public:
    CompositeCharacter(sf::RenderWindow renderTarget);
    CompositeCharacter(sf::RenderTexture renderTarget);
    ~CompositeCharacter(){}
public:

    void pushBackPart(GameObject *part);
    void pushFrontPart(GameObject *part);

private:
    QList<IGraphic*> graphics;
public:
    void updateSprite(GameObject &object);
    void update(GameObject &object);
    void render(GameObject &object);
};

#endif // ANIMATEDCHARACTER_H
