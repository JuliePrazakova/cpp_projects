//
// Created by julpr on 2. 1. 2021.
//

#include "TezkaObrannaHelma.h"

TezkaObrannaHelma::TezkaObrannaHelma(std::string velikost,int bonusObrany):Helma(velikost) {
    m_bonusObrany = bonusObrany;
}

int TezkaObrannaHelma::getBonusObrany() {
    return m_bonusObrany;
};
void TezkaObrannaHelma::printInfo(){
    std::cout<<"velikost: "<<m_velikost<<std::endl;
    std::cout<<"bonus obrany: "<<getBonusObrany();
}