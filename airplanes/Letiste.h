//
// Created by julpr on 3. 1. 2021.
//

#ifndef ZKOUSKA2018_LETISTE_H
#define ZKOUSKA2018_LETISTE_H
#include "DopravniLetadlo.h"
#include "NakladniLetadlo.h"
#include <vector>
#include <iostream>


class Letiste {
    std::vector<Letadlo*> m_letadla;
    std::string m_nazev;
    int m_kapacita;
public:
    Letiste(std::string nazev,int kapacita);
    void pridejLetadlo(Letadlo* letadlo);
    void odeberLetadlo(Letadlo* letadlo);
    void printInfo();
};


#endif //ZKOUSKA2018_LETISTE_H
