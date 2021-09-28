//
// Created by julpr on 3. 1. 2021.
//

#include "StrongMutant.h"

StrongMutant::StrongMutant(int sila, int jedovatost){
    m_sila=sila;
    m_jedovatost=jedovatost;
}
int StrongMutant::getAttack(){
    return m_sila+m_jedovatost;
}