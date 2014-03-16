#ifndef ANIMATION_H
#define ANIMATION_H

#ifndef SPRITEANIMATION_H
#define SPRITEANIMATION_H
#include <QList>
#include <SFML/Graphics.hpp>



class Animation: public sf::Drawable
{
public:

    explicit Animation(int stepCount, int kindCount, int width, int height, sf::Texture &texture);
    virtual ~Animation(){}
    void update();
    void stepForward();
    void stepBackward();
    void stepAlternate();

    int getCurrentStep() const;
    void setCurrentStep(int value);

    int getCurrentKind() const;
    void setCurrentKind(int value);

    bool getGoingForward() const;
    void setGoingForward(bool value);

private:
    int stepCount,currentStep;
    int kindCount,currentKind;
    int width,height;
    bool goingForward;
    sf::Texture *texture;
    sf::Sprite sprite;

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif // SPRITEANIMATION_H
#endif // ANIMATION_H
