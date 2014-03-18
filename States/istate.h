#ifndef STATE_H
#define STATE_H
#include "GameObject/gameobject.h"
#include "Inputs/iinput.h"
#include <QList>

class GameObject;
class IState
{
public:
    virtual ~IState(){}
    virtual int handleInput(GameObject &object,IInput *input) = 0;
    virtual int update(GameObject &object) = 0; //outputs the exit

private:
    QList<IState *> exitsList;
};

#endif // STATE_H
