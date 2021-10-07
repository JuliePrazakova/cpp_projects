//
// Created by julpr on 3. 1. 2021.
//

#include "Osoba.h"
#include "Interakce.h"

Osoba::Osoba(std::string jmeno, int sila, int zdravi){
    m_jmeno = jmeno;
    m_sila = sila;
    m_zdravi = zdravi;
    m_predmety = {};
    m_interakce = {};
}

void Osoba::interaguj(Osoba* druhaOsoba){

    vypisInterakce();

    int vyberUzivatele=rozhodnutiUzivatele();

    m_interakce.at(vyberUzivatele)->interaguj(this, druhaOsoba);
}
int Osoba::rozhodnutiUzivatele(){
    int vyberUzivatele=0;
    std::cout<<"zadejte cislo pozadovane interakce: ";
    std::cin>>vyberUzivatele;
    return vyberUzivatele;
}
void Osoba::vypisInterakce(){
    for(int i = 0; i<m_interakce.size();i++){
        std::cout<<m_interakce.at(i)->getPopis()<<"["<<i<<"]"<<std::endl;
    }
}
void Osoba::naucInterakce(Interakce* interakce){
    m_interakce.push_back(interakce);
}
void Osoba::seberPredmet(Predmet* predmet){
    m_predmety.push_back(predmet);
}
int Osoba::getSila(){
   return m_sila;
}
int Osoba::getZdravi(){
    return m_zdravi;
}
void Osoba::uberZdravi(int kolik){
    m_zdravi -=kolik;
}
std::string Osoba::getJmeno(){
    return m_jmeno;
}
Predmet* Osoba::getPredmet(int index){
    if ((index >= 0) && (index < m_predmety.size())){
        return m_predmety.at(index);
    } else {
        return nullptr;
    }
}

void Osoba::odeberPredmet(int index){
    if ((index >= 0) && (index < m_predmety.size())){
        m_predmety.erase(m_predmety.begin()+index);
    }
}