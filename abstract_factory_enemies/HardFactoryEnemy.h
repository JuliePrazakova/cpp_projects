//
// Created by julpr on 3. 1. 2021.
//

#ifndef ABSTRAKTNITOVARNA_ENEMYFACTOY_HARDFACTORYENEMY_H
#define ABSTRAKTNITOVARNA_ENEMYFACTOY_HARDFACTORYENEMY_H
#include "EnemyFacetory.h"
#include "StrongMutant.h"
#include "SkeletonKing.h"

class HardFactoryEnemy:public EnemyFacetory {
public:
    HardFactoryEnemy();
    Skeleton* getSkeleton();
    Mutant* getMutant();
};


#endif //ABSTRAKTNITOVARNA_ENEMYFACTOY_HARDFACTORYENEMY_H
