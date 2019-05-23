#ifndef BULLET_H
#define BULLET_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>



class Bullet: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT //Macro
public:
    Bullet(QGraphicsItem * parent=0);

public slots:
    void move();  //Fonction qui peut etre connectée à un signal
};

#endif // BULLET_H
