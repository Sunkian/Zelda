#include "key.h"

Key::Key(QGraphicsItem * parent, int type):QObject (),QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/key.jpg"));
}

int Key::type() const
{
    return 4;
}
