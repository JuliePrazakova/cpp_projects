//
// Created by julpr on 1. 12. 2020.
//

#ifndef TEST2_MATROS_AUTOBAZAR_H
#define TEST2_MATROS_AUTOBAZAR_H
#include "Automobil.h"
#include <vector>

class Autobazar {
    std::vector<Automobil*> m_vozidla;

public:
    Autobazar(){};
    void vypisAuta();
    int getMajetek();
    void pridejAutomobil(Automobil* car);
    void stocKilometry(std::string model, int pocet);
};


#endif //TEST2_MATROS_AUTOBAZAR_H
