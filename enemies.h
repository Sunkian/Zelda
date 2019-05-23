#ifndef ENNEMIES_H
#define ENNEMIES_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Enemies:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT //Macro
public:
    Enemies(QGraphicsItem * parent=0, int type=0);
    int type() const override;
    int getLife() const;
    int life;


private:
    int enemyType;

};


#endif // ENNEMIES_H
