//
// Created by julpr on 17. 11. 2020.
//

#ifndef CVIKO9_FORESTTILE_H
#define CVIKO9_FORESTTILE_H

#include "Tile.h"

class ForestTile:public Tile {
public:
    ForestTile(int creatureLevel);
    void print();
};


#endif //CVIKO9_FORESTTILE_H
