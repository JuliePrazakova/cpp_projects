//
// Created by julpr on 3. 1. 2021.
//

#ifndef MAIN_CPP_KROUZKOVEBRNENI_H
#define MAIN_CPP_KROUZKOVEBRNENI_H
#include "Brneni.h"

class KrouzkoveBrneni: public Brneni {
public:
    KrouzkoveBrneni(int vaha, int odolnost);
    void printInfo();
    int getBonusObrany();
    int getBonusUtoku();
};


#endif //MAIN_CPP_KROUZKOVEBRNENI_H
