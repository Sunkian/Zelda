#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include "hero.h"
#include "map.h"
#include "map2.h"
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <mainwindow.h>


map2 * Map2;
Map * map;
MainWindow * mainwindow;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    mainwindow = new MainWindow();
//    mainwindow->show();

        map = new Map();
        map->show();
        //Map2 = new map2();
        //Map2->show();

    return a.exec();
}
