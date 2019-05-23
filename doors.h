#ifndef DOORS_H
#define DOORS_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>


class Doors: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT //Macro
public:
    Doors(QGraphicsItem * parent=0, int type=0);
    int type() const override;

private:
    int doorType;

};
#endif // DOORS_H
