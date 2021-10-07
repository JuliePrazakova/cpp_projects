//
// Created by julpr on 25. 12. 2020.
//

#include "Game.h"


Game::Game(){
    m_vstupniSouradnice.x = 0;
    m_vstupniSouradnice.y = 0;
    m_hraBezi = true;
}
void Game::setSouradnice(Map::posun okolik){
    m_vstupniSouradnice.x += okolik.x;
    m_vstupniSouradnice.y += okolik.y;
}
Map::pozice Game::getVstupniSouradnice(){
    return m_vstupniSouradnice;
}

void Game::printUvedeniDoDeje(){
    std::cout << "Vitame te hraci v nasi hre - Ztracen v lese. Tvym ukolem je dostat se z lesa tim, ze obrovi seberete kouzelny diamant, ktery vlastni jenom jeden a nikdo nevi, ktery. V lese jsou i vily, ktere pokud si nevis rady, za odpovezeni otazky ti radi pomuzou."<< std::endl;

}

void Game::printGameOver(){
    std::cout << "Vyhral jsi! Povedlo se ti ukradnout diamant a dostat se z lesa!" << std::endl;
}

void Game::printEndOfGame(){
    std::cout << "Ajeje. Obr byl silnejsi nez ty.";
}
void Game::pohyb(){
    char pohyb;
    std::string pohyby = "wasd";
    std::cout << "Zadej pohyb na klavesnici:" << std::endl;
    std::cin >> pohyb;
    pohyb = tolower(pohyb);
    while(pohyby.find(pohyb) == -1){
        std::cout << "Spatne zadane hodnoty. Zadej prosim znovu:" <<std::endl;
        std::cin >> pohyb;
        pohyb = tolower(pohyb);
    }
    switch(pohyb)
    {
        case 's':
            Game::setSouradnice({1, 0});
            break;
        case 'w':
            Game::setSouradnice({-1, 0});
            break;
        case 'a':
            Game::setSouradnice({0,-1});
            break;
        case 'd':
            Game::setSouradnice({0,1});
    }
}

void Game::setMapu(int level,Map::pozice souradnice){
    Map* map = nullptr;
    map = Map::createMap(level,souradnice);
    map->print();
}
int Game::setLevel(){
    int level =0;
    std::cout<<"zadejte cislo vybrane urovne:"<<std::endl;
    std::cout<<"easy[1]"<<std::endl;
    std::cout<<"medium[2]"<<std::endl;
    std::cout<<"hard[3]"<<std::endl;
    std::cin>>level;
    return level;
}