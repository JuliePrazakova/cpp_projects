//
// Created by julpr on 3. 1. 2021.
//

#ifndef ABSTRAKTNITOVARNA_ENEMYFACTOY_ENEMYFACETORY_H
#define ABSTRAKTNITOVARNA_ENEMYFACTOY_ENEMYFACETORY_H
#include "Skeleton.h"
#include "Mutant.h"

class EnemyFacetory {
public:
    EnemyFacetory();
    virtual Skeleton* getSkeleton()=0;
    virtual Mutant* getMutant()=0;
};


#endif //ABSTRAKTNITOVARNA_ENEMYFACTOY_ENEMYFACETORY_H
