//
// Created by julpr on 2. 1. 2021.
//

#include "RytirBuilder.h"

RytirBuilder::RytirBuilder() {
    m_rytir = nullptr;
}

void RytirBuilder::createRytir(std::string jmeno, int sila){
    m_rytir = new Rytir(jmeno, sila);
}
Rytir* RytirBuilder::getRytir(){
    return m_rytir;
}