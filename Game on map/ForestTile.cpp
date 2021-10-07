//
// Created by julpr on 17. 11. 2020.
//

#include "ForestTile.h"

ForestTile::ForestTile(int creatureLevel):Tile(creatureLevel) {

}

void ForestTile::print() {
    std::cout<<"/\\";
    printCreature("/\\");
    std::cout<<"/\\";
}