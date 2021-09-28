//
// Created by julpr on 4. 1. 2021.
//

#include "AlchymistickeMestoBuilder.h"

void AlchymistickeMestoBuilder::createMesto(std::string jmeno, int uspory) {
    Mesto* mesto = new Mesto(jmeno, uspory);
    mesto->setCenaZaBydleni(30);
    mesto->setKomfortZivota(30);
    Budova* laborator = new Budova("Laborator",3,5);
    Budova* studovna = new Budova("Magicka studovna",3,1);

    mesto->pridejBudovu(laborator);
    mesto->pridejBudovu(studovna);

    m_mesto = mesto;
}