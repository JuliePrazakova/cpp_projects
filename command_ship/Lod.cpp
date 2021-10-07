//
// Created by julpr on 2. 1. 2021.
//

#include "Lod.h"

Lod::Lod(){
    m_naklad= new Naklad();
}
void Lod::provedAkci(){
    //vypsani akce
    for(int i = 0; i<m_akce.size(); i++){
        std::cout<<m_akce.at(i)->getPopis()<<"["<<i<<"]"<<std::endl;
    }

    //ziskat vstup uzivatele
    int vyberUzivatele = 0;
    std::cout<<"vyberte si ze seznamu akci a zadejte cislo: ";
    std::cin>>vyberUzivatele;

    //provedeni akce
   m_akce.at(vyberUzivatele)->provedAkci(m_naklad);
}
void Lod::ulozAkci(Akce* akce){
    m_akce.push_back(akce);
}
Lod::~Lod(){
    delete m_naklad;
}