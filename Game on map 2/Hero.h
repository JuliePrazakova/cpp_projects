//
// Created by julpr on 25. 12. 2020.
//

#ifndef MAPA_HERO_H
#define MAPA_HERO_H
#include "Tile.h"

class Hero: public Tile {
    std::string m_type;
    int m_power;
public:
    Hero();
    void print();
    std::string getType();
};


#endif //MAPA_HERO_H
