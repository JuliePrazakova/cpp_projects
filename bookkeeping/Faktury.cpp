//
// Created by julpr on 4. 1. 2021.
//

#include "Faktury.h"

Faktury::Faktury(std::string firma,std::string datum,std::string osoba,int cisloUctu, int uhrada): Ucty(firma,datum,osoba,uhrada){
    m_cisloUctu = cisloUctu;
}
void Faktury::zmenOsobu(std::string druhaOsoba){
    m_osoba = druhaOsoba;
}

void Faktury::tiskni() {
    std::cout<<"firma: "<<m_firma<<std::endl;
    std::cout<<"osoba: "<<m_osoba<<std::endl;
    std::cout<<"k uhrade: "<<m_kUhrade<<std::endl;
    std::cout<<"datum: "<<m_datum<<std::endl;
    std::cout<<"cislo uctu: "<<m_cisloUctu<<std::endl;
    std::cout<<std::endl;
}