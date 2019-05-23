#include "wall.h"
#include <QGraphicsScene>
#include <stdlib.h>

Wall::Wall(QGraphicsItem * parent):QObject (),QGraphicsPixmapItem(parent )
{
    setPixmap(QPixmap(":/images/wall2.png"));
}

int Wall::type() const{

    return WALL;
}
