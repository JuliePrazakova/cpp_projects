//
// Created by julpr on 3. 1. 2021.
//

#ifndef ABSTRAKTNITOVARNA_ENEMYFACTOY_SKELETONSOLDIER_H
#define ABSTRAKTNITOVARNA_ENEMYFACTOY_SKELETONSOLDIER_H
#include "Skeleton.h"

class SkeletonSoldier:public Skeleton {
    int m_silaKosti;
public:
    SkeletonSoldier(int silaKosti);
    int getAttack();
};


#endif //ABSTRAKTNITOVARNA_ENEMYFACTOY_SKELETONSOLDIER_H
