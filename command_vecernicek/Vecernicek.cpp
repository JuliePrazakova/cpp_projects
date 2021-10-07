//
// Created by julpr on 3. 1. 2021.
//

#include "Vecernicek.h"

Vecernicek::Vecernicek(){
    m_pozdrav = nullptr;
}
void Vecernicek::naucPozdrav(Pozdrav* pozdrav){
    m_pozdrav = pozdrav;
}
void Vecernicek::privitej(){
    m_pozdrav->privitani();
}
void Vecernicek::rozlucSe() {
    m_pozdrav->rozlouceni();
}
