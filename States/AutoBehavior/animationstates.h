#ifndef ANIMATIONSTATES_H
#define ANIMATIONSTATES_H
#include "bobidle.h"
#include "bobanimate.h"
class BobIdle;
class BobAnimate;

class AnimationStates
{
public:
    AnimationStates();
    static BobIdle bobbingIdle;
    static BobAnimate bobbingAnimation;
};

#endif // ANIMATIONSTATES_H
