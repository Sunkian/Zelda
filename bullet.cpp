#include "bullet.h"
#include <QTimer>
#include <QGraphicsScene>

Bullet::Bullet(QGraphicsItem * parent):QObject (),QGraphicsPixmapItem(parent )
{
        //Creation de la balle

        setPixmap(QPixmap(":/images/fireball.jpg"));

        //Connecter la balle
        QTimer * timer = new QTimer();
        connect(timer,SIGNAL(timeout()),this,SLOT(move()));

        timer->start(50);
}

void Bullet::move()
{
    //Bouger la balle vers le haut
    setPos(x(),y()-50);
    if(pos().y() + pixmap().height()  < 0){  //Si la balle sort de l'écran on la supprime
        scene()->removeItem(this);
        delete this;
    }
}
