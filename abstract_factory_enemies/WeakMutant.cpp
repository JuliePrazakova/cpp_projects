//
// Created by julpr on 3. 1. 2021.
//

#include "WeakMutant.h"

WeakMutant::WeakMutant(int sila){
    m_sila = sila;
}
int WeakMutant::getAttack(){
    return m_sila;
}