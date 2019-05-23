#ifndef HERO_H
#define HERO_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsScene>



class Hero:public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Hero(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent * event);
    int type() const override;
    QGraphicsItem * checkCollision();

private:
    void movement(int xMove, int yMove);
    int comptKey=0;
    int hp;
    void fight(QGraphicsItem * currentEnemy);
    void endGame();



};

#endif // HERO_H
