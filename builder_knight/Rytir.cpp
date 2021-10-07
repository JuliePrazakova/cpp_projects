//
// Created by julpr on 2. 1. 2021.
//

#include "Rytir.h"

Rytir::Rytir(std::string jmeno, int sila){
    m_jmeno = jmeno;
    m_sila = sila;
}
void Rytir::setHelma(Helma* helma){
    m_helma = helma;
}

void Rytir::setBrneni(Brneni* brneni){
    m_brneni = brneni;
}

void Rytir::printInfo(){
   std::cout<<m_jmeno<<std::endl;
   std::cout<<m_sila<<std::endl;
}