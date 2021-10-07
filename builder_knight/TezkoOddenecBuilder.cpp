//
// Created by julpr on 2. 1. 2021.
//

#include "TezkoOddenecBuilder.h"

void TezkoOddenecBuilder::buildHelma(std::string velikost) {
    m_rytir->setHelma(new TezkaObrannaHelma(velikost,100));
}

void TezkoOddenecBuilder::buildBrneni(int vaha, int odolnost) {
    m_rytir->setBrneni(new PlatoveBrneni(vaha,odolnost,100));
}