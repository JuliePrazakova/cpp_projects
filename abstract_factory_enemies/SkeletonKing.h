//
// Created by julpr on 3. 1. 2021.
//

#ifndef ABSTRAKTNITOVARNA_ENEMYFACTOY_SKELETONKING_H
#define ABSTRAKTNITOVARNA_ENEMYFACTOY_SKELETONKING_H
#include "Skeleton.h"

class SkeletonKing: public Skeleton {
    int m_silaDechu;
public:
    SkeletonKing(int silaDechu);
    int getAttack();
};


#endif //ABSTRAKTNITOVARNA_ENEMYFACTOY_SKELETONKING_H
