#include <QCoreApplication>
#include "game.h"
#include "composition.h"
#include "GameObject/gameobject.h"
#include "Inputs/iinput.h"
#include "Inputs/keyboardinput.h"
#include "States/vmovestate.h"
#include "testcreator.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    TestCreator test;
       sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
       sf::RenderTexture BufferRender;
       BufferRender.create(800,600);
        sf::Texture BufferRenderTexture;
        sf::Sprite BufferRenderSprite;

        GameObject object1 = *test.makeSuwakoHat();
        GameObject object0 = test.testPlayer();

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
           object0.handleInput();
           object1.handleInput();
           object0.update();
           object1.update();

          //
           BufferRender.clear();
           BufferRender.draw(object0);
           BufferRender.draw(object1);
           BufferRender.display();
           //

            //
           BufferRenderTexture = BufferRender.getTexture();
           BufferRenderSprite.setTexture(BufferRenderTexture,true);
           window.draw(BufferRenderSprite);
           //
           window.display();
       }

    return a.exec();
}

