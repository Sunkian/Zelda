#ifndef POTION_H
#define POTION_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>


class Potion: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT //Macro
public:
    Potion(QGraphicsItem * parent=0, int type=0);
    int type() const override;

private:
    int potionType;

};

#endif // POTION_H
