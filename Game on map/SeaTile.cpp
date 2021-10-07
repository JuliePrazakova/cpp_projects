//
// Created by julpr on 19. 11. 2020.
//

#include "SeaTile.h"

SeaTile::SeaTile(int creatureLevel):Tile(creatureLevel){

}

void SeaTile::print() {
    std::cout<<"~~";

    printCreature("~~");

    std::cout<<"~~";
}