#include "staticstates.h"

MovementStates::MovementStates()
{
}

VMoveState MovementStates::verticalIdle;
VMoveDown MovementStates::verticalDown;
VMoveUp MovementStates::verticalUp;

HMoveLeft MovementStates::horizontalLeft;
HMoveRight MovementStates::horizontalRight;
HMoveState MovementStates::horizontalIdle;

NoMovement MovementStates::noMovement;
