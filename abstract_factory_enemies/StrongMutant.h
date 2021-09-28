//
// Created by julpr on 3. 1. 2021.
//

#ifndef ABSTRAKTNITOVARNA_ENEMYFACTOY_STRONGMUTANT_H
#define ABSTRAKTNITOVARNA_ENEMYFACTOY_STRONGMUTANT_H
#include "Mutant.h"

class StrongMutant: public Mutant {
protected:
    int m_sila;
    int m_jedovatost;
public:
    StrongMutant(int sila, int jedovatost);
    int getAttack();
};


#endif //ABSTRAKTNITOVARNA_ENEMYFACTOY_STRONGMUTANT_H
