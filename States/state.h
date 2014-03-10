#ifndef STATE_H
#define STATE_H
#include "GameObject/gameobject.h"
#include "Inputs/iinput.h"

class GameObject;
class IState
{
public:
    virtual ~IState(){}
    virtual void handleInput(GameObject &object,IInput *input,int stateIndex) = 0;
    virtual void update(GameObject &object) = 0;

};

#endif // STATE_H
