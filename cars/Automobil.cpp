//
// Created by julpr on 1. 12. 2020.
//

#include "Automobil.h"
/*
Automobil::Automobil(int cena, int km, std::string model){
    m_puvodniCena=cena;
    m_najetoKm=km;
    m_model=model;
}*/
std::string Automobil::getModel(){
    return m_model;
}
int Automobil::getNajetoKm(){
    return m_najetoKm;
}
void Automobil::setNajetoKm(int km) {
    m_najetoKm = km;
}