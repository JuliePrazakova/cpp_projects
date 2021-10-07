//
// Created by julpr on 25. 12. 2020.
//

#include "Forest.h"

void Forest::print() {
    std::cout<<"/\\";
}

Forest::Forest() {
    m_type = "forest";
}

std::string Forest::getType(){
    return m_type;
}