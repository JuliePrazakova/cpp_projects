//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKA12_UTERY_BUILDER_LEHKOODDENECBUILDER_H
#define CVIKA12_UTERY_BUILDER_LEHKOODDENECBUILDER_H
#include "RytirBuilder.h"
#include "LehkaUtocnaHelma.h"
#include "KrouzkoveBrneni.h"

class LehkoOddenecBuilder:public RytirBuilder {
public:
    void buildHelma(std::string velikost);
    void buildBrneni(int sila, int odolnost);
};


#endif //CVIKA12_UTERY_BUILDER_LEHKOODDENECBUILDER_H
