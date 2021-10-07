//
// Created by julpr on 4. 1. 2021.
//

#include "MestoBuilder.h"

MestoBuilder::MestoBuilder(){
    m_mesto = nullptr;
}
Mesto* MestoBuilder::getMesto(){
    return m_mesto;
}

void MestoBuilder::printInfo() {
    m_mesto->printInfo();
}