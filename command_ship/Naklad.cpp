//
// Created by julpr on 2. 1. 2021.
//

#include "Naklad.h"

Zbozi Naklad::getZbozi(int ktere){
   return m_naklad.at(ktere);
}

int Naklad::getPocetZbozi(){
    return m_naklad.size();
}

void Naklad::pridejZbozi(Zbozi zbozi){
    m_naklad.push_back(zbozi);
}