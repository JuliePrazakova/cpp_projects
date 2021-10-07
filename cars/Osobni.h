//
// Created by julpr on 1. 12. 2020.
//

#ifndef TEST2_MATROS_OSOBNI_H
#define TEST2_MATROS_OSOBNI_H
#include "Automobil.h"

class Osobni: public Automobil {
    int m_bourano;
public:
    Osobni(int nabourano, int najeto, int cena, std::string model);
    int getCena();
    void printInfo();
};


#endif //TEST2_MATROS_OSOBNI_H
