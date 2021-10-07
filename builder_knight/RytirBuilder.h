//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKA12_UTERY_BUILDER_RYTIRBUILDER_H
#define CVIKA12_UTERY_BUILDER_RYTIRBUILDER_H
#include "Rytir.h"
#include <iostream>


class RytirBuilder {
protected:
    Rytir* m_rytir;
public:
    RytirBuilder();
    void createRytir(std::string jmeno, int sila);
    Rytir* getRytir();
    virtual void buildHelma(std::string velikost)=0;
    virtual void buildBrneni(int vaha, int odolnost)=0;
};


#endif //CVIKA12_UTERY_BUILDER_RYTIRBUILDER_H
