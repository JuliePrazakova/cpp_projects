//
// Created by julpr on 25. 12. 2020.
//

#ifndef MAPA_TILE_H
#define MAPA_TILE_H
#include <iostream>

class Tile {
public:
    Tile(){};
    virtual void print()=0;
    virtual std::string getType()=0;
};


#endif //MAPA_TILE_H
