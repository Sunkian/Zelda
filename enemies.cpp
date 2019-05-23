#include "enemies.h"

Enemies::Enemies(QGraphicsItem * parent, int type):QObject (),QGraphicsPixmapItem(parent)
{
    this->enemyType=type;
    if (type ==0){
        this->life = 60;
    setPixmap(QPixmap(":/images/pioupiou.jpg"));
    }
    else if(type ==1){
        this->life = 40;
    setPixmap(QPixmap(":/images/rock.png"));
    }
}

int Enemies::type() const
{
    return 5 + this->enemyType;
}

int Enemies::getLife() const
{
    return this->life;
}
