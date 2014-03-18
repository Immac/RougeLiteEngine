#ifndef ANIMATEDGRAPHICS_H
#define ANIMATEDGRAPHICS_H
#include "Graphics/igraphic.h"
#include "Graphics/animation.h"
class AnimatedGraphics: public IGraphic
{
public:
    AnimatedGraphics(Animation *animation,sf::RenderTarget &renderTarget);
    // IGraphic interface
public:
    void update(GameObject &object);
    void render(GameObject &object);

    //Accessors
    Animation *getAnimation() const;
    void setAnimation(Animation *value);

    sf::Transform getTransformation() const;
    void setTransformation(const sf::Transform &value);

private:
    sf::RenderTarget *renderTarget;
    Animation *animation;
    sf::Transform transformation;
};

#endif // ANIMATEDGRAPHICS_H
