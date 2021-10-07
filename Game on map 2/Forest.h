//
// Created by julpr on 25. 12. 2020.
//

#ifndef MAPA_FOREST_H
#define MAPA_FOREST_H
#include "Tile.h"

class Forest:public Tile {
    std::string m_type;

public:
    Forest();
    std::string getType();

    void print();
};


#endif //MAPA_FOREST_H
