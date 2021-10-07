//
// Created by julpr on 25. 12. 2020.
//

#ifndef MAPA_GAME_H
#define MAPA_GAME_H
#include "Map.h"


class Game {

protected:
    bool m_hraBezi;
    Map::pozice m_vstupniSouradnice;

public:

    Game();
    void printUvedeniDoDeje();
    int setLevel();
    void printGameOver();
    void printEndOfGame();
    Map::pozice getVstupniSouradnice();
    void kolo();
    void pohyb();
    void setSouradnice(Map::posun okolik);
    void nastaveniHry();
    void setMapu(int level,Map::pozice souradnice);
};


#endif //MAPA_GAME_H
