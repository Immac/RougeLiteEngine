#include <Graphics/animatedgraphics.h>
#include <QCoreApplication>
#include <States/Movement/hmoveidle.h>
#include <States/Movement/hmoveleft.h>
#include <States/Movement/hmoveright.h>
#include "game.h"
#include "composition.h"
#include "GameObject/gameobject.h"
#include "Inputs/iinput.h"
#include "Inputs/keyboardinput.h"
#include "Graphics/animation.h"
#include "States/statemachine.h"
#include "States/Movement/vmoveidle.h"
#include "States/Movement/vmoverdown.h"
#include "States/Movement/vmoveup.h"

int main(int argc, char *argv[])
{

    //QCoreApplication a(argc, argv);
       sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
       sf::RenderTexture BufferRender;
       BufferRender.create(800,600);
        sf::Texture BufferRenderTexture;
        sf::Sprite BufferRenderSprite;
        //============ test frame limit
        window.setFramerateLimit(20);
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
        AnimatedGraphics *simpleGraphics = new AnimatedGraphics(animationObject,BufferRender);

        //============ test keyboard input object
        KeyboardInput keyInput;
        //============ test movement states
        StateMachine VerticalMovementMachine;
        MachinableState idleVertical;
        idleVertical.state = new VMoveIdle;
        idleVertical.Exits.insert(0,Idle);
        idleVertical.Exits.insert(1,MoveUp);
        idleVertical.Exits.insert(2,MoveDown);

        MachinableState downVertical;
        downVertical.state = new VMoveDown;
        downVertical.Exits.insert(0,MoveDown);
        downVertical.Exits.insert(1,Idle);

        MachinableState upVertical;
        upVertical.state = new VMoveUp;
        upVertical.Exits.insert(0,MoveUp);
        upVertical.Exits.insert(1,Idle);

        VerticalMovementMachine.addState(idleVertical,Idle);
        VerticalMovementMachine.addState(downVertical,MoveDown);
        VerticalMovementMachine.addState(upVertical,MoveUp);

        StateMachine HorizontalMovementMachine;
        MachinableState idleHorizontal;
        idleHorizontal.state = new HMoveIdle;
        idleHorizontal.Exits.insert(0,Idle);
        idleHorizontal.Exits.insert(1,MoveLeft);
        idleHorizontal.Exits.insert(2,MoveRight);

        MachinableState leftHorizontal;
        leftHorizontal.state = new HMoveLeft;
        leftHorizontal.Exits.insert(0,MoveLeft);
        leftHorizontal.Exits.insert(1,Idle);

        MachinableState rightHorizontal;
        rightHorizontal.state = new HMoveRight;
        rightHorizontal.Exits.insert(0,MoveRight);
        rightHorizontal.Exits.insert(1,Idle);

        HorizontalMovementMachine.addState(idleHorizontal,Idle);
        HorizontalMovementMachine.addState(leftHorizontal,MoveLeft);
        HorizontalMovementMachine.addState(rightHorizontal,MoveRight);


        //============ test gameobject
        GameObject *gameObject1 = new GameObject(&keyInput,simpleGraphics);
        gameObject1->addStateMachine(&VerticalMovementMachine);
        gameObject1->addStateMachine(&HorizontalMovementMachine);
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
           //animationObject->stepAlternate(); //shoulde be called around here, after the states have done changes
           // update objects
           gameObject1->update();
           //animationObject->update(); // TEST PURPOSES should be called on update

           // update animations
           //gameObject1->animate();


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

    //return a.exec();
       return 0;
}
