#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QObject>
#include <QVector>
#include <SFML/Graphics.hpp>

class GameScene : public QObject
{
    Q_OBJECT
public:
    explicit GameScene(QObject *parent = 0);

private:

signals:

public slots:

};

#endif // GAMESCENE_H
