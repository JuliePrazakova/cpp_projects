//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKA12_UTERY_BUILDER_RYTIRDIRECTOR_H
#define CVIKA12_UTERY_BUILDER_RYTIRDIRECTOR_H
#include "RytirBuilder.h"

class RytirDirector {
    RytirBuilder* m_rytirBuilder;
public:
    RytirDirector();
    void setRytirBuilder(RytirBuilder* builder);
    Rytir* createRytir(std::string jmeno, int sila, std::string velikostHelmy, int vaha, int odolnost);
};


#endif //CVIKA12_UTERY_BUILDER_RYTIRDIRECTOR_H
