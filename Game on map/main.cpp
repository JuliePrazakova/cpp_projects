#include <iostream>
#include <vector>
#include "ForestTile.h"
#include "SeaTile.h"
#include "Map.h"


int main() {
    /*
    ForestTile* les = new ForestTile();
    les->print();
    delete les;


    std::vector<Tile*> tiles;
    //předtim tu bylo vector<ForestTile>
    // ale ted uz je tam jen list Tilu a diky polymorfismu do nej muzeme nahrat jak SeaTile tak forestTile

    tiles.push_back(new SeaTile(3));
    tiles.push_back(new ForestTile(9));
    tiles.push_back(new ForestTile(0));

    for(auto tile:tiles){   //vypisou se vedle sebe
        tile->print();
        std::cout<<" ";
    }*/
    Map* myMap = new Map(1);
    myMap->print();

    delete myMap;
    return 0;
}
