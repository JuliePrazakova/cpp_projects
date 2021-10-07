//
// Created by julpr on 2. 1. 2021.
//

#include "Akce.h"

Akce::Akce(std::string popis){
    m_popis=popis;
}

std::string Akce::getPopis(){
    return m_popis;
}