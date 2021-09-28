//
// Created by julpr on 4. 1. 2021.
//

#include "DulniMestoBuilder.h"

void DulniMestoBuilder::createMesto(std::string jmeno, int uspory) {
    Mesto* mesto = new Mesto(jmeno, uspory);
    mesto->setCenaZaBydleni(10);
    mesto->setKomfortZivota(10);
    Budova* dul = new Budova("Dul",1,1);
    Budova* obchod = new Budova("Obchod",1,1);

    mesto->pridejBudovu(dul);
    mesto->pridejBudovu(obchod);

    m_mesto = mesto;
}