//
// Created by julpr on 3. 1. 2021.
//

#ifndef MAIN_CPP_PLATOVEBRNENI_H
#define MAIN_CPP_PLATOVEBRNENI_H
#include "Brneni.h"

class PlatoveBrneni:public Brneni {
    int m_ohybnost;
public:
    PlatoveBrneni(int vaha, int odolnost, int ohybnost);
    void printInfo();
    int getBonusUtoku();
    int getBonusObrany();
};


#endif //MAIN_CPP_PLATOVEBRNENI_H
