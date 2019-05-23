#ifndef MAP2_H
#define MAP2_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "hero.h"
#include "wall.h"
#include <QObject>
#include "doors.h"

class map2: public QGraphicsView{

public:
    map2(QWidget * parent=0);
    QGraphicsScene * scene;
    Hero * hero;


private:
void addWall(int x, int y);
void addDoor(int x, int y, int type);
void addKey(int x, int y);
void addEnemy(int x, int y, int type);
void addLadder(int x, int y);
void addPotion(int x, int y, int type);
void addPrincess(int x, int y);

};


#endif // MAP2_H
