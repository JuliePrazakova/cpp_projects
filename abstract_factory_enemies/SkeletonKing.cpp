//
// Created by julpr on 3. 1. 2021.
//

#include "SkeletonKing.h"

SkeletonKing::SkeletonKing(int silaDechu){
    m_silaDechu = silaDechu;
}
int SkeletonKing::getAttack(){
    return m_silaDechu;
}