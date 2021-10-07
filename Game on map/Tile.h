//
// Created by julpr on 17. 11. 2020.
//

#ifndef CVIKO9_TILE_H
#define CVIKO9_TILE_H

#include <iostream> //includuju tady aby se zdedil i do potomku!!
#include "Creature.h"

class Tile {
protected:
    Creature* m_creature;
    void printCreature(std::string tileSymbol);
public:
    Tile(int creatureLevel);
    virtual void print() = 0; // ciste virtualni, to poznam podle '=0'
    virtual ~Tile(); //pro jistotu, kdyby potomci potrebovali destruktor
};


#endif //CVIKO9_TILE_H
