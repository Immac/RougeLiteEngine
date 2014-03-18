#include <QCoreApplication>
#include "game.h"
#include "composition.h"
#include "GameObject/gameobject.h"
#include "Inputs/iinput.h"
#include "Inputs/keyboardinput.h"
#include "Graphics/animation.h"
#include "Graphics/simplecharacter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
       sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
       sf::RenderTexture BufferRender;
       BufferRender.create(800,600);
        sf::Texture BufferRenderTexture;
        sf::Sprite BufferRenderSprite;
        //============ test frame limit
        window.setFramerateLimit(60);
        //============  animation test object
        sf::Texture animationSpriteSheet;
        if(!animationSpriteSheet.loadFromFile("Assets/Images/chara1.png"))
        {
            window.close();
            exit(100);
        }
        Animation *animationObject = new Animation(3,4,32,32,animationSpriteSheet);
        animationObject->update();
        //============ test Simple IGraphics
        SimpleCharacter *simpleGraphics = new SimpleCharacter(BufferRender);
        simpleGraphics->setSprite(animationObject);
        //============ test keyboard input object
        KeyboardInput keyInput;
        //============ test movement stats
        //HMoveState horizontalMove;
       // VMoveState verticalMove;
        //============ test gameobject
        GameObject *gameObject1 = new GameObject(&keyInput,simpleGraphics);
        //gameObject1->addState(&horizontalMove);
        //gameObject1->addState(&verticalMove);
        //============

       while (window.isOpen())
       {
           sf::Event event;
           while (window.pollEvent(event))
           {
               if (event.type == sf::Event::Closed)
                   window.close();
               if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                   window.close();
           }

           // handle inputs
           gameObject1->handleInput();
           animationObject->stepAlternate(); //shoulde be called around here, after the states have done changes
           // update objects
           gameObject1->update();
           animationObject->update(); // TEST PURPOSES should be called on update

           // update animations
           gameObject1->animate();


           //draw the objects
           BufferRender.clear();
           gameObject1->render();
           BufferRender.display();

           BufferRenderTexture = BufferRender.getTexture();
           BufferRenderSprite.setTexture(BufferRenderTexture,true);
           window.draw(BufferRenderSprite);
           //
           window.display();
       }

    return a.exec();
}

