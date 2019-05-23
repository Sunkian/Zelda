#include "map.h"
#include <QGraphicsItem>
#include <QBrush>
#include <QImage>
#include <QTimer>
#include <QGraphicsScene>
#include <QObject>
#include "hero.h"
#include "wall.h"
#include <QGraphicsPixmapItem>
#include "doors.h"
#include "key.h"
#include "enemies.h"
#include "ladder.h"
#include "potion.h"



void Map::addWall(int y, int x) {
    Wall * wall = new Wall();
    wall->setPos(x*50, y*50);
    scene->addItem(wall);
}

void Map::addDoor(int y, int x, int type)
{
    Doors * door = new Doors(0,type);
    door->setPos(x*50,y*50);
    scene->addItem(door);
}

void Map::addKey(int y, int x)
{
    Key * key = new Key();
    key->setPos(x*50,y*50);
    scene->addItem(key);
}

void Map::addEnemy(int y, int x, int type)
{
    Enemies * enemies= new Enemies(0,type);
    enemies->setPos(x*50,y*50);
    scene->addItem(enemies);
}

void Map::addLadder(int y, int x)
{
    Ladder * ladder = new Ladder();
    ladder->setPos(x*50,y*50);
    scene->addItem(ladder);
}

void Map::addPotion(int y, int x, int type)
{
    Potion * potion= new Potion(0,type);
    potion->setPos(x*50,y*50);
    scene->addItem(potion);
}


Map::Map(QWidget * parent)
{
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,700,700);
    setBackgroundBrush(QBrush(QImage(":/images/dungeon2.png")));


    setScene(scene);
        setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        setFixedSize(700,700);

        char map[14][14] = {{1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                            {1,0,0,0,1,9,1,0,0,0,1,4,4,1},
                            {1,0,1,0,1,6,1,0,1,0,1,0,4,1},
                            {1,4,1,0,1,4,1,0,1,0,1,3,1,1},
                            {1,6,1,0,1,2,1,0,1,4,0,0,0,1},
                            {1,5,1,0,0,0,0,0,1,0,0,0,0,1},
                            {1,6,1,1,1,1,1,1,1,1,1,1,2,1},
                            {1,0,2,0,0,0,0,0,0,0,0,0,0,1},
                            {1,0,1,1,1,1,1,1,1,1,6,1,1,1},
                            {1,0,1,0,0,4,0,0,4,0,0,2,5,1},
                            {1,8,1,0,1,1,1,2,1,1,0,1,9,1},
                            {1,4,1,0,1,0,0,0,0,1,0,1,1,1},
                            {1,9,1,8,1,0,0,0,4,1,3,2,7,1},
                            {1,1,1,1,1,1,1,1,1,1,1,1,1,1}

            };


            for (int line = 0; line < 14; line++) {
              for (int col = 0 ; col < 14; col++) {
                if (map[line][col] == WALL) {
                  addWall(line, col);


                }
                else if(map[line][col] == 2){
                    addDoor(line,col,0);
                }
                else if(map[line][col] == 3){
                    addDoor(line,col,1);
                }
                else if(map[line][col] == 4){
                    addKey(line,col);
                }
                else if(map[line][col] == 5){
                    addEnemy(line,col,0);
                }
                else if(map[line][col] == 6){
                    addEnemy(line,col,1);
                }
                else if(map[line][col] == 7){
                    addLadder(line,col);
                }
                else if(map[line][col] == 8){
                    addPotion(line,col,0);
                }
                else if(map[line][col] == 9){
                    addPotion(line,col,1);
                }
              }
            }

            hero = new Hero();
            hero->setPos(300,600); // TODO generalize to always be in the middle bottom of screen
            // make the player focusable and set it to be the current focus
            hero->setFlag(QGraphicsItem::ItemIsFocusable);
            hero->setFocus();
            // add the player to the scene
            scene->addItem(hero);



            show();
}
