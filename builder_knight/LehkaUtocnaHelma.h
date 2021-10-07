//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKA12_UTERY_BUILDER_LEHKAUTOCNAHELMA_H
#define CVIKA12_UTERY_BUILDER_LEHKAUTOCNAHELMA_H
#include "Helma.h"

class LehkaUtocnaHelma:public Helma {
public:
    LehkaUtocnaHelma(std::string velikost);
    int getBonusObrany();
    void printInfo();
};


#endif //CVIKA12_UTERY_BUILDER_LEHKAUTOCNAHELMA_H
