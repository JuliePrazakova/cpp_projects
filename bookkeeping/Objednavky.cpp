//
// Created by julpr on 4. 1. 2021.
//

#include "Objednavky.h"

Objednavky::Objednavky(std::string firma,std::string datum,std::string osoba,std::string adresa, int uhrada): Ucty(firma,datum,osoba,uhrada){
    m_adresa = adresa;
}
void Objednavky::zmenOsobu(std::string druhaOsoba){
    m_osoba = druhaOsoba;
}
void Objednavky::tiskni() {
    std::cout<<"firma: "<<m_firma<<std::endl;
    std::cout<<"osoba: "<<m_osoba<<std::endl;
    std::cout<<"k uhrade: "<<m_kUhrade<<std::endl;
    std::cout<<"datum: "<<m_datum<<std::endl;
    std::cout<<"adresa: "<<m_adresa<<std::endl;
    std::cout<<std::endl;
}