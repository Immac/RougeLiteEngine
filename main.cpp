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
#include "Graphics/simplecharacter.h"
#include "States/statemachine.h"
#include "States/Movement/vmoveidle.h"
#include "States/Movement/vmoverdown.h"
#include "States/Movement/vmoveup.h"

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
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
        SimpleCharacter *simpleGraphics = new SimpleCharacter(BufferRender);
        simpleGraphics->setSprite(animationObject);
        //============ test keyboard input object
        KeyboardInput keyInput;
        //============ test movement stats
        StateMachine machine;
        MachinableState myState;
        myState.state = new VMoveIdle;
        myState.Exits.insert(0,EInput::Idle);
        myState.Exits.insert(1,EInput::MoveUp);
        myState.Exits.insert(2,EInput::MoveDown);

        MachinableState myState2;
        myState2.state = new VMoverDown;
        myState2.Exits.insert(0,EInput::MoveDown);
        myState2.Exits.insert(1,EInput::Idle);

        MachinableState myState3;
        myState3.state = new VMoveUp;
        myState3.Exits.insert(0,EInput::MoveUp);
        myState3.Exits.insert(1,EInput::Idle);

        machine.addState(myState,Idle);
        machine.addState(myState2,MoveDown);
        machine.addState(myState3,MoveUp);

        StateMachine machine2;
        MachinableState yourState;
        yourState.state = new HMoveIdle;
        yourState.Exits.insert(0,EInput::Idle);
        yourState.Exits.insert(1,EInput::MoveLeft);
        yourState.Exits.insert(2,EInput::MoveRight);

        MachinableState yourState2;
        yourState2.state = new HMoveLeft;
        yourState2.Exits.insert(0,EInput::MoveLeft);
        yourState2.Exits.insert(1,EInput::Idle);

        MachinableState yourState3;
        yourState3.state = new HMoveRight;
        yourState3.Exits.insert(0,EInput::MoveRight);
        yourState3.Exits.insert(1,EInput::Idle);

        machine2.addState(yourState,Idle);
        machine2.addState(yourState2,MoveLeft);
        machine2.addState(yourState3,MoveRight);


        //============ test gameobject
        GameObject *gameObject1 = new GameObject(&keyInput,simpleGraphics);
        gameObject1->addStateMachine(&machine);
        gameObject1->addStateMachine(&machine2);
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
