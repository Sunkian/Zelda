#ifndef COLLISIONSCHECK_H
#define COLLISIONSCHECK_H
#include <hero.h>
#include <map.h>
#include <wall.h>
#include <QWidget>
#include <QObject>
#include <QTimer>
#include <QVBoxLayout>
#include <QTime>
#include <QEventLoop>
#include <QCoreApplication>

class Map;
class CollisionsCheck : public QWidget
{
    Q_OBJECT

public:
    void checkCollisionWall(Wall * wall);
};

#endif // COLLISIONSCHECK_H
