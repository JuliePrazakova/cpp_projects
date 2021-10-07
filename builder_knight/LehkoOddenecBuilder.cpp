//
// Created by julpr on 2. 1. 2021.
//

#include "LehkoOddenecBuilder.h"

void LehkoOddenecBuilder::buildHelma(std::string velikost){
    m_rytir->setHelma(new LehkaUtocnaHelma(velikost));
}

void LehkoOddenecBuilder::buildBrneni(int sila, int odolnost) {
    m_rytir->setBrneni(new KrouzkoveBrneni(sila,odolnost));
}