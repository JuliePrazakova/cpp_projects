//
// Created by julpr on 2. 1. 2021.
//

#include "SpravceChyb.h"

//inincializace staticke vlastnosti s_spravce
//LAZY INICIALIZACE = vznikne az bude potreba
        //rozdil od eager inicializace
        // ( existuje uz od zacatku - napr pro databaze aby se necekalo na navazani spojeni)
SpravceChyb* SpravceChyb::s_spravce = nullptr;


void SpravceChyb::pridejChybu(Chyba chyba){
    m_chyby.push_back(chyba);
}

void SpravceChyb::print(){
    for(auto chyba:m_chyby){
        std::cout<<"chyba: "<<chyba.m_popisChyby <<"\n";
        std::cout<<"nazev tridy: "<<chyba.m_nazevTridy <<"\n";
        std::cout<<"nazev metody: "<<chyba.m_nazevMetody <<"\n";
    }
}

SpravceChyb* SpravceChyb::getSpravceChyb(){
    if(s_spravce == nullptr){
        s_spravce = new SpravceChyb();
    }
        return s_spravce;
}

SpravceChyb::~SpravceChyb(){

}

SpravceChyb::SpravceChyb(){

}