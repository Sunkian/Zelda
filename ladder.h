#ifndef LADDER_H
#define LADDER_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Ladder:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT //Macro
public:
    Ladder(QGraphicsItem * parent=0);
    int type() const override;


};


#endif // LADDER_H
