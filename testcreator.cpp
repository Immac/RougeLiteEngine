#include "testcreator.h"


TestCreator::TestCreator()
{
}

GameObject TestCreator::testPlayer()
{
    IGraphic *graphics = new CompositeCharacter;
    GameObject *suwakoHat = makeSuwakoHat();
    GameObject *charHead = makeHead();
    dynamic_cast<CompositeCharacter*>(graphics)->pushBackPart(suwakoHat);
    dynamic_cast<CompositeCharacter*>(graphics)->pushFrontPart(charHead);

    KeyboardInput *input = new KeyboardInput();

    GameObject *object =  new GameObject(input,graphics);
    object->addState(&MovementStates::horizontalIdle);
    object->addState(&MovementStates::verticalIdle);
    return *object;
}

GameObject *TestCreator::makeSuwakoHat()
{
    KeyboardInput *input = new KeyboardInput();
    SimpleCharacter *graphics = new SimpleCharacter;

    GameObject *object =  new GameObject(input,graphics);
    sf::Texture *texture = new sf::Texture;
    texture->loadFromFile("Assets/Images/suwakoHat.png");
    sf::Sprite *mySprite = new sf::Sprite(*texture);
    mySprite->setPosition(0,-10);
    graphics->setGraphic(mySprite);
    object->setMySprite(mySprite);

    object->addState(&AnimationStates::bobbingIdle);

    return object;
}

GameObject *TestCreator::makeHead()
{
    KeyboardInput *input = new KeyboardInput();
    SimpleCharacter *graphics = new SimpleCharacter;

    GameObject *object =  new GameObject(input,graphics);
    sf::Texture *texture = new sf::Texture;
    texture->loadFromFile("Assets/Images/UnknownCharacter/headDown.png");
    sf::Sprite *mySprite = new sf::Sprite(*texture);
    mySprite->setPosition(9,0);
    graphics->setGraphic(mySprite);
    //object->setMySprite(mySprite);
    object->addState(&AnimationStates::bobbingIdle);
    return object;
}

