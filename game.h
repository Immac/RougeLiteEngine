#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QVector>
#include "gamescene.h"
class Game : public QObject
{
    Q_OBJECT
public:
    explicit Game(QObject *parent = 0);
private:
    QVector<GameScene *> gameScenes;
signals:

public slots:

};

#endif // GAME_H
