#include "animation.h"


Animation::Animation(int stepCount, int kindCount, int width, int height, sf::Texture &texture)
{
    this->currentKind = 0;          this->currentStep = 0;
    this->stepCount = stepCount;    this->kindCount = kindCount;
    this->width = width;            this->height = height;
    this->goingForward = true;
    sprite.setTexture(texture);
}

void Animation::update()
{
    int left = currentStep*width;
    int top = currentKind*height;
    sprite.setTextureRect(sf::Rect<int>(left,top,width,height));
}

void Animation::stepForward()
{
    currentStep = (currentStep+1 >= stepCount) ? 0 : currentStep+1;
}

void Animation::stepBackward()
{
    currentStep = (currentStep == 0) ? stepCount-1 : currentStep-1;
}

void Animation::stepAlternate()
{
    if(goingForward)
    {
        stepForward();
        if(currentStep == 0)
        {
            currentStep = stepCount - 1;
            stepBackward();
            goingForward = false;
        }
    }
    else
    {
        stepBackward();
        if(currentStep == stepCount - 1)
        {
            currentStep = 0;
            stepForward();
            goingForward = true;
        }
    }
}


//Accesors
int Animation::getCurrentStep() const
{
    return currentStep;
}

void Animation::setCurrentStep(int newValue)
{
    currentStep = (newValue>=stepCount)?currentStep:newValue;
}
int Animation::getCurrentKind() const
{
    return currentKind;
}

void Animation::setCurrentKind(int newValue)
{
    currentKind = (newValue>=kindCount)?currentKind:newValue;
}
bool Animation::getGoingForward() const
{
    return goingForward;
}

void Animation::setGoingForward(bool value)
{
    goingForward = value;
}




void Animation::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(sprite,states);
}
