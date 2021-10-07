//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKA12_UTERY_BUILDER_HELMA_H
#define CVIKA12_UTERY_BUILDER_HELMA_H
#include <iostream>

class Helma {
protected:
    std::string m_velikost;
public:
    Helma(std::string velikost);
    virtual int getBonusObrany()=0;
    virtual void printInfo()=0;
};


#endif //CVIKA12_UTERY_BUILDER_HELMA_H
