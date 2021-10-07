//
// Created by julpr on 9. 11. 2020.
//

#ifndef CVIKO8_SKLAD_H
#define CVIKO8_SKLAD_H
#include <vector>
#include "Patro.h"

class Sklad {
std::vector<Patro*> m_patra;

public:
    Sklad(int pocetPater);
    void ulozKontejner(Kontejner* kontejner, int patro, int pozice);
    void odeberKontejner(Kontejner* kontejner, int patro, int pozice);
    void vypisObsahSkladu();
    ~Sklad()   ;
};


#endif //CVIKO8_SKLAD_H
