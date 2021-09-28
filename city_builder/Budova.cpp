//
// Created by julpr on 4. 1. 2021.
//

#include "Budova.h"
Budova::Budova(std::string nazev, int bonusCena, int bonusKomfort) {
    m_nazev = nazev;
    m_bonusCena = bonusCena;
    m_bonusKomfort = bonusKomfort;
}

int Budova::getBonusKomfort(){
    return m_bonusKomfort;
}
int Budova::getBonusCena(){
    return m_bonusCena;
}

void Budova::printInfo() {
    std::cout<<"nazev: "<<m_nazev<<std::endl;
    std::cout<<"bonus ke komfortu: "<<m_bonusKomfort<<std::endl;
    std::cout<<"bonus k cene: "<<m_bonusCena<<std::endl;
}