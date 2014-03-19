#ifndef ISPRITE_H
#define ISPRITE_H

#include "GameObject/gameobject.h"
class GameObject;

class IGraphic
{

public:
    virtual void update(GameObject &object) = 0;
    virtual void render(GameObject &object) = 0;

    virtual ~IGraphic() {}
protected:


};

#endif // ISPRITE_H
