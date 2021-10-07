//
// Created by julpr on 4. 1. 2021.
//

#include "MestoDirector.h"

MestoDirector::MestoDirector(MestoBuilder* builder){
    m_builder = builder;
}
void MestoDirector::setBuilder(MestoBuilder* builder){
    m_builder = builder;
}
Mesto* MestoDirector::createMesto(std::string jmeno, int uspory){
    m_builder->createMesto(jmeno,uspory);
    return m_builder->getMesto();
}
void MestoDirector::printInfo() {
    m_builder->printInfo();
    std::cout<<std::endl;
}