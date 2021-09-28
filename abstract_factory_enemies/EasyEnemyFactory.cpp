//
// Created by julpr on 3. 1. 2021.
//

#include "EasyEnemyFactory.h"

Skeleton* EasyEnemyFactory::getSkeleton(){
    Skeleton* skeleton = new SkeletonSoldier(60);
    return skeleton;
}
Mutant* EasyEnemyFactory::getMutant(){
    Mutant* mutant= new WeakMutant(30);
    return mutant;
}