//
// Created by julpr on 4. 1. 2021.
//

#include "ObchodniMestoBuilder.h"


void ObchodniMestoBuilder::createMesto(std::string jmeno, int uspory) {
    Mesto* mesto = new Mesto(jmeno, uspory);
    mesto->setCenaZaBydleni(20);
    mesto->setKomfortZivota(20);
    Budova* trznice = new Budova("Trznice",3,2);
    Budova* obchod = new Budova("Obchod",1,1);

    mesto->pridejBudovu(trznice);
    mesto->pridejBudovu(obchod);

    m_mesto = mesto;
}