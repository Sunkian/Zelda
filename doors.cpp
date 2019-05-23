#include "doors.h"

Doors::Doors(QGraphicsItem * parent, int type):QObject (),QGraphicsPixmapItem(parent)
{
    this->doorType=type;
    if (type ==0){
    setPixmap(QPixmap(":/images/door2.png"));
    }
    else if(type ==1){
    setPixmap(QPixmap(":/images/doorhard22.png"));
    }


}

int Doors::type() const
{
    return 2+ this->doorType;
}
