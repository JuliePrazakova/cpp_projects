//
// Created by julpr on 25. 12. 2020.
//

#ifndef MAPA_PATRONUS_H
#define MAPA_PATRONUS_H
#include "Tile.h"

class Patronus: public Tile {
    std::string m_type;
    std::string m_subject;
public:
    Patronus(std::string subject);
    std::string getType();

    void print();
};


#endif //MAPA_PATRONUS_H
