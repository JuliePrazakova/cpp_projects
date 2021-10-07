//
// Created by julpr on 2. 1. 2021.
//

#include "LehkaUtocnaHelma.h"

LehkaUtocnaHelma::LehkaUtocnaHelma(std::string velikost):Helma(velikost) {
}

int LehkaUtocnaHelma::getBonusObrany() {
    return 0;
};
void LehkaUtocnaHelma::printInfo() {
    std::cout<<"velikost: "<<m_velikost<<std::endl;
};