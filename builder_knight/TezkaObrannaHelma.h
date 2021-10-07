//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKA12_UTERY_BUILDER_TEZKAOBRANNAHELMA_H
#define CVIKA12_UTERY_BUILDER_TEZKAOBRANNAHELMA_H
#include "Helma.h"

class TezkaObrannaHelma: public Helma {
    int m_bonusObrany;
public:
    TezkaObrannaHelma(std::string velikost, int bonusObrany);
    int getBonusObrany();
    void printInfo();
};


#endif //CVIKA12_UTERY_BUILDER_TEZKAOBRANNAHELMA_H
