//
// Created by julpr on 3. 1. 2021.
//

#ifndef ABSTRAKTNITOVARNA_ENEMYFACTOY_MUTANT_H
#define ABSTRAKTNITOVARNA_ENEMYFACTOY_MUTANT_H
#include <iostream>

class Mutant {
public:
    Mutant(){};
    virtual ~Mutant(){};
    virtual int getAttack()=0;

};


#endif //ABSTRAKTNITOVARNA_ENEMYFACTOY_MUTANT_H
