#ifndef ISPRITE_H
#define ISPRITE_H

#include <SFML/Graphics.hpp>
#include "GameObject/gameobject.h"
class GameObject;

class IGraphic
{

public:
    virtual void updateSprite(GameObject &object) = 0;
    virtual ~IGraphic() {}
protected:


};

#endif // ISPRITE_H
