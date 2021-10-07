//
// Created by julpr on 19. 11. 2020.
//

#include "Map.h"

Map::Map(int size) {
    std::vector<Tile*>row(3, nullptr);
    row.at(0) = (new ForestTile(0));
    row.at(1) = (new ForestTile(2));
    row.at(2) = (new SeaTile(0));

    std::vector<Tile*> row2;
    row2.push_back(new ForestTile(3));
    row2.push_back(new SeaTile(0));
    row2.push_back(new SeaTile(0));

    std::vector<Tile*> row3;
    row3.push_back(new SeaTile(0));
    row3.push_back(new SeaTile(1));
    row3.push_back(new SeaTile(0));

    m_tiles.push_back(row);
    m_tiles.push_back(row2);
    m_tiles.push_back(row3);
}
void Map::print() {
    for (auto row:m_tiles){ //auto == std::vector<Tile*>  je to urychlení
        //vytahnu radek, v druhem for cyklu projdu radek a pristoupim v bunce
        for(auto tile:row){
            tile->print();
            std::cout<< " ";

        }
        std::cout<<std::endl;

    }
}