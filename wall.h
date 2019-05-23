#ifndef WALL_H
#define WALL_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>



class Wall: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT //Macro
public:
    Wall(QGraphicsItem * parent=0);
    int type() const override;


};

#endif // WALL_H
