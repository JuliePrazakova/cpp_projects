//
// Created by julpr on 3. 1. 2021.
//

#ifndef ABSTRAKTNITOVARNA_ENEMYFACTOY_EASYENEMYFACTORY_H
#define ABSTRAKTNITOVARNA_ENEMYFACTOY_EASYENEMYFACTORY_H
#include "EnemyFacetory.h"
#include "SkeletonSoldier.h"
#include "WeakMutant.h"

class EasyEnemyFactory:public EnemyFacetory {
public:
    EasyEnemyFactory(){};
    Skeleton* getSkeleton();
    Mutant* getMutant();
};


#endif //ABSTRAKTNITOVARNA_ENEMYFACTOY_EASYENEMYFACTORY_H
