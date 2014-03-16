#include <QCoreApplication>
#include "game.h"
#include "composition.h"
#include "GameObject/gameobject.h"
#include "Inputs/iinput.h"
#include "Inputs/keyboardinput.h"
#include "States/vmovestate.h"
#include "testcreator.h"
#include "Graphics/animation.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    TestCreator test;
       sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
       sf::RenderTexture BufferRender;
       BufferRender.create(800,600);
        sf::Texture BufferRenderTexture;
        sf::Sprite BufferRenderSprite;
        //============
        window.setFramerateLimit(10);
        //============
        sf::Texture animationSpriteSheet;
        if(!animationSpriteSheet.loadFromFile("Assets/Images/chara1.png"))
        {
            window.close();
            exit(100);
        }
        Animation *animationObject = new Animation(3,4,32,32,animationSpriteSheet);
        animationObject->update();
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

          //
           BufferRender.clear();
           BufferRender.draw(*animationObject);
           BufferRender.display();
           //
            animationObject->stepAlternate();
            animationObject->update();
            //

           BufferRenderTexture = BufferRender.getTexture();
           BufferRenderSprite.setTexture(BufferRenderTexture,true);
           window.draw(BufferRenderSprite);
           //
           window.display();
       }

    return a.exec();
}

