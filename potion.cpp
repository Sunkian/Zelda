#include "potion.h"

Potion::Potion(QGraphicsItem * parent, int type):QObject (),QGraphicsPixmapItem(parent)
{
    this->potionType=type;

    if (type ==0){
    setPixmap(QPixmap(":/images/potion2.jpg"));
    }
    else if(type ==1){
    setPixmap(QPixmap(":/images/potion.jpg"));
    }


}

int Potion::type() const
{
    return 8 + this->potionType;
}
