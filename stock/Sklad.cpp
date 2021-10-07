//
// Created by julpr on 9. 11. 2020.
//

#include "Sklad.h"

std::vector<Patro*> m_patra;

Sklad::Sklad(int pocetPater){
    std::vector<Patro*> patra(pocetPater, new Patro());
    m_patra = patra;
}
Sklad::~Sklad(){
    for(int i; i<m_patra.size(); i++) {
       delete m_patra.at(i);
    }
}

void Sklad::ulozKontejner(Kontejner* kontejner, int patro, int pozice){
    if((patro>=0) && (patro <m_patra.size())){
        m_patra.at(patro)->ulozKontejner(kontejner, pozice);
    }else {
        std::cout<<"neukladej na uchylne pozice!!!"<<std::endl;
    }

   /* Patro* aktivniPatro = m_patra.at(patro);          to same co nahore
    aktivniPatro->ulozKontejner(kontejner, pozice); */
}
void Sklad::odeberKontejner(Kontejner* kontejner, int patro, int pozice){
    if(patro>=0 && patro <m_patra.size()){
        m_patra.at(patro)->odeberKontejner(pozice);
    }else {
        std::cout<<"sklad: odeber kontejner má chybuuu"<<std::endl;
    }
}
void Sklad::vypisObsahSkladu(){
    for(int i; i<m_patra.size(); i++) {
        std::cout<<"patro: "<<i<<std::endl;
        m_patra.at(i)->vypisObsahPatra();
    }
}