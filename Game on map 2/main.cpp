#include <iostream>
#include "Game.h"
#include <iostream>

int main() {
    Game* game = new Game();
    game->printUvedeniDoDeje();
    int level = game->setLevel();
    int i = 0;
    while(i<10){
        game->setMapu(level,game->getVstupniSouradnice());

        game->pohyb();
        i++;
    }
    delete game;
    return 0;
}
