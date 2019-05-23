#include "hero.h"
#include <QEvent>
#include "bullet.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QEvent>
#include <QList>
#include "map.h"
#include "map2.h"
#include <QGraphicsItem>
#include "wall.h"
#include <QGraphicsScene>
#include <QDebug>
#include <enemies.h>


Hero::Hero(QGraphicsItem *parent):QGraphicsPixmapItem (parent)
{
    this->hp=100;
    setPixmap(QPixmap(":/images/link_50.png"));

}

void Hero::movement(int xMove, int yMove) {
    xMove *= 50;
    yMove *= 50;
    setPos(x() + xMove, y() + yMove);
    QGraphicsItem * currentItem = checkCollision();
    switch (currentItem->type()) {

    case WALL:
        setPos(x() - xMove, y()- yMove);
        break;


    case DOOREASY:
        if (this->comptKey >= 1){
            this->scene()->removeItem(currentItem);
            this->comptKey -= 1;
            qDebug("Vous avez ouvert une porte");
        }
        else {
            setPos(x() - xMove, y()- yMove);
            qDebug("Vous n'avez pas assez de clés");
        }
        break;

    case DOORHARD:
        if (this->comptKey >=2){
            this->scene()->removeItem(currentItem);
            this->comptKey -= 2;
            qDebug("Vous avez ouvert une porte");
        }
        else {
            setPos(x() - xMove, y()- yMove);
            qDebug("Vous n'avez pas assez de clés");
        }
        break;

    case KEY:  //CLES
        this->scene()->removeItem(currentItem);
        this->comptKey++;
        qDebug()<<comptKey;

        break;

    case ENNEMYEASY:
        setPos(x() - xMove, y()- yMove);
        this->fight(currentItem);
        break;

    case ENNEMYHARD:
        setPos(x() - xMove, y()- yMove);
        this->fight(currentItem);
        break;

    case LADDER:
        map2 * Map2;
        Map2 = new map2();
        Map2->show();

        break;


    case POTSMALL:
        this->scene()->removeItem(currentItem);
        this->hp += 25;
        qDebug()<<hp;
        break;

    case POTBIG:
        this->scene()->removeItem(currentItem);
        this->hp += 50;
        qDebug()<<hp;
        break;

    default:
        break;
    }
}

void Hero::fight(QGraphicsItem * currentEnemy)

{

        if (currentEnemy->type() == ENNEMYEASY){
            qDebug("Vous avez  assez de vie");
            this->hp -= 40;
            qDebug()<<hp;
            this->scene()->removeItem(currentEnemy);

        }
         else if (currentEnemy->type() == ENNEMYHARD){
            qDebug("Vous avez assez de vie");
            this->hp -= 60;
            qDebug()<<hp;
            this->scene()->removeItem(currentEnemy);
        }
        if (this->hp <= 0){
            qDebug("Vous etes mort !");
            this->endGame();

        }

}

void Hero::endGame()
{
    exit(0);
}

void Hero::keyPressEvent(QKeyEvent *event)
{
    this->setFocus();
    switch (event->key()) {
    case Qt::Key_Up:
        this->movement(0,-1);
        break;

    case Qt::Key_Down:
        this->movement(0,1);
        break;

    case Qt::Key_Right:
        this->movement(1,0);
        break;

    case Qt::Key_Left:
        this->movement(-1,0);
        break;

    case Qt::Key_Space:
        //Creation d'une balle
        Bullet * bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
        break;

    }
    this->checkCollision();


}

int Hero::type() const
{
    return -1;
}

QGraphicsItem * Hero::checkCollision()
{

    QGraphicsScene * s = this->scene();
    foreach (QGraphicsItem *item, scene()->items()) {
        if (item->collidesWithItem(this) && this!=item){
            //            qDebug() << item->type();
            return item;
        }
    }
    return this;
}





