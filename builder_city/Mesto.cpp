//
// Created by julpr on 4. 1. 2021.
//

#include "Mesto.h"

Mesto::Mesto(std::string jmeno, int uspory){
    m_jmeno = jmeno;
    m_uspory = uspory;
}
std::string Mesto::getJmeno(){
    return m_jmeno;
}
int Mesto::getStavUspor(){
    return m_uspory;
}
int Mesto::getKomfortZivota(){
    int bonus = 0;
    for(int i = 0; i<m_budovy.size();i++){
        bonus+=m_budovy.at(i)->getBonusKomfort();
    }
    return m_komfortZivota+bonus;
}
int Mesto::getCenaZaBydleni(){
    int bonus = 0;
    for(int i = 0; i<m_budovy.size();i++){
        bonus+=m_budovy.at(i)->getBonusCena();
    }
    return m_cenaZaBydleni-bonus;
}
void Mesto::setCenaZaBydleni(int cena){
    m_cenaZaBydleni = cena;
}
void Mesto::setKomfortZivota(int komfort){
    m_komfortZivota = komfort;
}
void Mesto::pridejBudovu(Budova* budova){
    m_budovy.push_back(budova);
}

void Mesto::printInfo(){
    std::cout<<"jmeno: "<<m_jmeno<<std::endl;
    std::cout<<"uspory: "<<m_uspory<<std::endl;
    std::cout<<"komfort zivota: "<<m_komfortZivota<<std::endl;
    std::cout<<"cena za bydleni: "<<m_cenaZaBydleni<<std::endl;
    std::cout<<"budovy: "<<std::endl;
    for(int i = 0;i<m_budovy.size();i++){
        m_budovy.at(i)->printInfo();
    }
}