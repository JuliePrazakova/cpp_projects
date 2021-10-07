//
// Created by julpr on 9. 11. 2020.
//

#ifndef CVIKO8_PATRO_H
#define CVIKO8_PATRO_H

#include <iostream>
#include <array>
#include "Kontejner.h"

class Patro {
    std::array<Kontejner*,10> m_pozice;
public:
    Patro();
    void ulozKontejner(Kontejner* kontejner, int pozice);
    void odeberKontejner(int pozice);
    void vypisObsahPatra();

};


#endif //CVIKO8_PATRO_H
