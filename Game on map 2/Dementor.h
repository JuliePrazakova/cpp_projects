//
// Created by julpr on 25. 12. 2020.
//

#ifndef MAPA_DEMENTOR_H
#define MAPA_DEMENTOR_H
#include "Tile.h"

class Dementor: public Tile {
    std::string m_type;

    int m_power;
public:

    Dementor(int power);
    std::string getType();
    void print();
};


#endif //MAPA_DEMENTOR_H
