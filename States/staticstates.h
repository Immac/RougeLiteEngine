#ifndef STATICSTATES_H
#define STATICSTATES_H
#include "vmovestate.h"
#include "vmovedown.h"
#include "vmoveup.h"
#include "hmoveleft.h"
#include "hmoveright.h"
#include "hmovestate.h"
#include "nomovement.h"

class VMoveState; class VMoveDown; class VMoveUp;
class HMoveLeft; class HMoveRight; class HMoveState;
class NoMovement;

class MovementStates
{
public:
    MovementStates();
    static VMoveState verticalIdle;
    static VMoveDown verticalDown;
    static VMoveUp verticalUp;
    static HMoveLeft horizontalLeft;
    static HMoveRight horizontalRight;
    static HMoveState horizontalIdle;
    static NoMovement noMovement;
};

#endif // STATICSTATES_H
