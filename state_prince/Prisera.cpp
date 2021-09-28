//
// Created by julpr on 3. 1. 2021.
//

#include "Prisera.h"

Prisera::Prisera(){
    m_stav = new Zabak();
}
void Prisera::privitej(){
    m_stav->privitej();
}
void Prisera::rozlucSe(){
    m_stav->rozlucSe();
}
void Prisera::polibek(){
    m_stav = new Princ();
}
Prisera::~Prisera(){
    delete m_stav;
}