#ifndef ANIMATEDCHARACTER_H
#define ANIMATEDCHARACTER_H
#include "igraphic.h"
#include "GameObject/gameobject.h"
#include <QVector>
#include "composition.h"

class CompositeCharacter:public IGraphic
{
public:
    CompositeCharacter();
    ~CompositeCharacter();
    // IGraphic interface
public:

    void pushBackPart(GameObject *part);
    void pushFrontPart(GameObject *part);

private:
    Composition *sprite;
    QVector<GameObject *> parts;

    // IGraphic interface


    // IGraphic interface
public:
    void updateSprite(GameObject &object);
};

#endif // ANIMATEDCHARACTER_H
