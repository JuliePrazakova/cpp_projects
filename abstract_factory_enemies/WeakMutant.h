//
// Created by julpr on 3. 1. 2021.
//

#ifndef ABSTRAKTNITOVARNA_ENEMYFACTOY_WEAKMUTANT_H
#define ABSTRAKTNITOVARNA_ENEMYFACTOY_WEAKMUTANT_H
#include "Mutant.h"

class WeakMutant: public Mutant {
protected:
    int m_sila;
public:
    WeakMutant(int sila);
    int getAttack();
};


#endif //ABSTRAKTNITOVARNA_ENEMYFACTOY_WEAKMUTANT_H
