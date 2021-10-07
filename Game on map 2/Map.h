//
// Created by julpr on 25. 12. 2020.
//

#ifndef MAPA_MAP_H
#define MAPA_MAP_H
#include <iostream>
#include <vector>
#include "Dementor.h"
#include "Patronus.h"
#include "Forest.h"
#include "Hero.h"



class Map {
public:
    struct pozice{
        int x;
        int y;
    };

    struct posun{
        int x;
        int y;
    };
    std::vector<std::vector<Tile*>>m_tiles;
    Map(int size, pozice souradnice);
public:
    static Map* createMap(int obtiznost,pozice souradnice);
    void print();
    Tile* getTile(pozice souradnice);

};


#endif //MAPA_MAP_H
