//
// Created by julpr on 3. 1. 2021.
//

#include "HardFactoryEnemy.h"

HardFactoryEnemy::HardFactoryEnemy() {}
Skeleton* HardFactoryEnemy::getSkeleton(){
    Skeleton* skeleton = new SkeletonKing(50);
    return skeleton;
}
Mutant* HardFactoryEnemy::getMutant(){
    Mutant* mutant = new StrongMutant(100,50);
    return mutant;
}