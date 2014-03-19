#ifndef MOVESTATE_H
#define MOVESTATE_H
#include "States/istate.h"
#include <QList>
typedef bool (*InputFunction)();
class moveState: public IState
{
public:
    moveState();

    // IState interface
public:
    int handleInput(GameObject &object, IInput *input);
    int update(GameObject &object);

private:
    QList<InputFunction> functions;


};

#endif // MOVESTATE_H

