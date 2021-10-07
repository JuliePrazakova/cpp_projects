//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKA12_UTERY_BUILDER_RYTIR_H
#define CVIKA12_UTERY_BUILDER_RYTIR_H
#include "Helma.h"
#include "Brneni.h"

class Rytir {
    std::string m_jmeno;
    int m_sila;
    Helma* m_helma;
    Brneni* m_brneni;
public:
    Rytir(std::string jmeno, int sila);
    void setHelma(Helma* helma);
    void setBrneni(Brneni* brneni);
    void printInfo();
};


#endif //CVIKA12_UTERY_BUILDER_RYTIR_H
