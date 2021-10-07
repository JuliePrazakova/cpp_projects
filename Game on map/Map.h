//
// Created by julpr on 19. 11. 2020.
//

#ifndef CVIKO9_MAP_H
#define CVIKO9_MAP_H
#include <vector>
#include "ForestTile.h"
#include "SeaTile.h"


class Map {
    std::vector< std::vector<Tile*> > m_tiles; //jednorozmerny sezna!
public:
    Map(int size);
    void print();
};


#endif //CVIKO9_MAP_H
