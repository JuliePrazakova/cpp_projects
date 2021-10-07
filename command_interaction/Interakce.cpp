//
// Created by julpr on 3. 1. 2021.
//

#include "Interakce.h"

std::string Interakce::getPopis(){
    return m_popis;
}
Interakce::Interakce(std::string popis){
    m_popis=popis;
}