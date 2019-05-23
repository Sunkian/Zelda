#include "ladder.h"

Ladder::Ladder(QGraphicsItem * parent):QObject (),QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/ladder.jpg"));
}

int Ladder::type() const
{
    return 7;
}
