#ifndef STATEMACHINE_H
#define STATEMACHINE_H
#include "States/istate.h"
#include <QList>
#include <QHash>

class IState;
enum EInput{
    Idle,
    MoveUp,MoveDown,MoveLeft,MoveRight,
    AttackUp,AttackDown,AttakLeft,AttackRight,
    Button1,Button2,Button3,Button4,Button5,
    Button6,Button7,Button8,Button9,Button10,
    Button11,Button12
};
struct MachinableState
{
    QHash<int,EInput> Exits;
    IState *state;
};
class StateMachine
{
public:
    StateMachine();
    void addState(MachinableState &newState,EInput key);
    void handleInput(GameObject &object,IInput *input);
    void update(GameObject &object);

    EInput getActiveState() const;
    void setActiveState(const EInput &value);

private:
    QHash<EInput,MachinableState *> machineStates;
    EInput activeState;
};



#endif // STATEMACHINE_H
