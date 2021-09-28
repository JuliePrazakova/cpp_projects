//
// Created by julpr on 3. 1. 2021.
//

#include "SkeletonSoldier.h"

SkeletonSoldier::SkeletonSoldier(int silaKosti){
    m_silaKosti = silaKosti;
}
int SkeletonSoldier::getAttack(){
    return m_silaKosti;
}