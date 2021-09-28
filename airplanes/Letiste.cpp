//
// Created by julpr on 3. 1. 2021.
//

#include "Letiste.h"

Letiste::Letiste(std::string nazev, int kapacita){
    m_nazev = nazev;
    m_kapacita = kapacita;
    m_letadla = {};
}
void Letiste::pridejLetadlo(Letadlo* letadlo){
    m_letadla.push_back(letadlo);
}
void Letiste::odeberLetadlo(Letadlo* letadlo){
    for(int i = 0; i<m_letadla.size(); i++){
        if(m_letadla.at(i) == letadlo){
            m_letadla.erase(m_letadla.begin()+i);
        }
    }
}
void Letiste::printInfo(){
    std::cout<<"nazev: "<<m_nazev<<std::endl;
    std::cout<<"kapacita: "<<m_kapacita<<std::endl;
    std::cout<<"letadla: "<<std::endl;
    for(int i = 0; i<m_letadla.size(); i++){
        m_letadla.at(i)->printInfo();
    }
}