#include "animatedgraphics.h"

AnimatedGraphics::AnimatedGraphics(Animation *animation, sf::RenderTarget &renderTarget)
{
    this->renderTarget = &renderTarget;
    this->animation = animation;
}

void AnimatedGraphics::update(GameObject &object)
{
    animation->stepForward();
    animation->update();
}

void AnimatedGraphics::render(GameObject &object)
{
    sf::Transform transient;
    transient *= transformation;
    transient*= object.getTransform();
    renderTarget->draw(*animation,transient);
}
Animation *AnimatedGraphics::getAnimation() const
{
    return animation;
}

void AnimatedGraphics::setAnimation(Animation *value)
{
    animation = value;
}
sf::Transform AnimatedGraphics::getTransformation() const
{
    return transformation;
}

void AnimatedGraphics::setTransformation(const sf::Transform &value)
{
    transformation = value;
}


