//
// Created by julpr on 17. 11. 2020.
//

#include "Tile.h"

void Tile::printCreature(std::string tileSymbol){

    if (m_creature != nullptr){
        std::cout<<"C"<<m_creature->getLevel();
    }else{
        std::cout<<tileSymbol;
    }
}

Tile::Tile(int creatureLevel){
    if(creatureLevel == 0){
        m_creature = nullptr;
    }else{
        m_creature = new Creature(creatureLevel);
    }
}
Tile::~Tile() {
    if(m_creature!= nullptr){
        delete m_creature;
    }
}