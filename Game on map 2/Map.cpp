//
// Created by julpr on 25. 12. 2020.
//

#include "Map.h"



Map::Map(int size, pozice souradnice) {

    std::vector<Tile*> row;
    for(int i = 0; i<size; i++){
        row.push_back(new Forest());
    }

    for(int j = 0; j<size; j++){
        m_tiles.push_back(row);
    }
    if(size == 5){
        m_tiles.at(1).at(1) = new Dementor(10);
        m_tiles.at(3).at(3) = new Dementor(10);
        m_tiles.at(0).at(2) = new Dementor(10);

        m_tiles.at(0).at(4) = new Patronus("luk");
        m_tiles.at(4).at(2) = new Patronus("helma");
        m_tiles.at(2).at(0) = new Patronus("nuz");

        //kontrola jestli na danem policku je forest - jestli ne tak se to preposle dementorovi / patronovi
        if( m_tiles.at(souradnice.x).at(souradnice.y)->getType() == "forest"){
            m_tiles.at(souradnice.x).at(souradnice.y) = new Hero();
        }
    }else if(size == 7){
        m_tiles.at(1).at(1) = new Dementor(10);
        m_tiles.at(3).at(3) = new Dementor(10);
        m_tiles.at(0).at(2) = new Dementor(10);
        m_tiles.at(0).at(2) = new Dementor(10);
        m_tiles.at(0).at(2) = new Dementor(10);

        m_tiles.at(0).at(4) = new Patronus("luk");
        m_tiles.at(4).at(2) = new Patronus("helma");
        m_tiles.at(2).at(0) = new Patronus("vidlicka");
        m_tiles.at(2).at(0) = new Patronus("nos");
        m_tiles.at(2).at(0) = new Patronus("oko");

        //kontrola jestli na danem policku je forest - jestli ne tak se to preposle dementorovi / patronovi
        if( m_tiles.at(souradnice.x).at(souradnice.y)->getType() == "forest"){
            m_tiles.at(souradnice.x).at(souradnice.y) = new Hero();
        }
    }else{
        m_tiles.at(1).at(1) = new Dementor(10);
        m_tiles.at(3).at(3) = new Dementor(10);
        m_tiles.at(7).at(2) = new Dementor(10);
        m_tiles.at(2).at(1) = new Dementor(10);
        m_tiles.at(3).at(6) = new Dementor(10);
        m_tiles.at(3).at(2) = new Dementor(10);
        m_tiles.at(5).at(7) = new Dementor(10);

        m_tiles.at(0).at(4) = new Patronus("luk");
        m_tiles.at(4).at(2) = new Patronus("helma");
        m_tiles.at(2).at(0) = new Patronus("nuz");
        m_tiles.at(6).at(1) = new Patronus("kudla");
        m_tiles.at(8).at(8) = new Patronus("vidlicka");
        m_tiles.at(2).at(4) = new Patronus("zlatonka");
        m_tiles.at(4).at(7) = new Patronus("lzice");

        //kontrola jestli na danem policku je forest - jestli ne tak se to preposle dementorovi / patronovi
        if( m_tiles.at(souradnice.x).at(souradnice.y)->getType() == "forest"){
        m_tiles.at(souradnice.x).at(souradnice.y) = new Hero();
        }
    }

}
Tile* Map::getTile(pozice souradnice){
    return m_tiles.at(souradnice.x).at(souradnice.y);
}
Map* Map::createMap(int obtiznost,pozice souradnice){
    Map* mapa = nullptr;
    if(obtiznost == 1){
        mapa = new Map(5, souradnice);
    }else if(obtiznost == 2){
        mapa = new Map(7,souradnice);
    }else if(obtiznost == 3){
        mapa = new Map(9,souradnice);
    }else {
        std::cout<<"zadavate neexistujici obtiznost";
    }
    return mapa;
}
void Map::print() {
    for(auto row: m_tiles){
        for(auto tile:row){
            tile->print();
            std::cout<<"\t";
        }
        std::cout<<std::endl;
    }

}