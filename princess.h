#ifndef PRINCESS_H
#define PRINCESS_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Princess:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT //Macro
public:
    Princess(QGraphicsItem * parent=0, int type=0);
    int type() const override;
};


#endif // PRINCESS_H
