#ifndef KEY_H
#define KEY_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Key:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT //Macro
public:
    Key(QGraphicsItem * parent=0, int type=0);
    int type() const override;
};

#endif // KEY_H
