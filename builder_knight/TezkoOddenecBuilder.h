//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKA12_UTERY_BUILDER_TEZKOODDENECBUILDER_H
#define CVIKA12_UTERY_BUILDER_TEZKOODDENECBUILDER_H
#include "RytirBuilder.h"
#include "TezkaObrannaHelma.h"
#include "PlatoveBrneni.h"

class TezkoOddenecBuilder:public RytirBuilder {
public:
    void buildHelma(std::string velikost);
    void buildBrneni(int vaha, int odolnost);
};


#endif //CVIKA12_UTERY_BUILDER_TEZKOODDENECBUILDER_H
