//
// Created by julpr on 2. 1. 2021.
//

#include "RytirDirector.h"

RytirDirector::RytirDirector(){
    m_rytirBuilder = nullptr;
}
void RytirDirector::setRytirBuilder(RytirBuilder* builder){
    m_rytirBuilder = builder;
}
Rytir* RytirDirector::createRytir(std::string jmeno, int sila, std::string velikostHelmy, int vaha, int odolnost){
    if(m_rytirBuilder == nullptr){
        std::cout<<"neni nastaveni bulider rytire!"<<std::endl;
        return nullptr;
    }else{
        m_rytirBuilder->createRytir(jmeno,sila);
        m_rytirBuilder->buildHelma(velikostHelmy);
        m_rytirBuilder->buildBrneni(vaha,odolnost);
        return m_rytirBuilder->getRytir();
    }
}