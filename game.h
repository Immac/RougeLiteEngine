#ifndef GAME_H
#define GAME_H
#include <QVector>
#include "gamescene.h"
class Game : public QObject
{
public:
    explicit Game();
private:
    QVector<GameScene *> gameScenes;


};

#endif // GAME_H
