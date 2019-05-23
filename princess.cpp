#include "princess.h"

Princess::Princess(QGraphicsItem * parent, int type):QObject (),QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/princess.png"));
}

int Princess::type() const
{
    return 10;
}
