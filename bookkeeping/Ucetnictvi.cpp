//
// Created by julpr on 4. 1. 2021.
//

#include "Ucetnictvi.h"

Ucetnictvi::Ucetnictvi(){
    m_ucty = {};
}
void Ucetnictvi::tiskniUctyOsoby(std::string osoba){
    std::cout<<"Ucetnictvi "<<osoba<<": "<<std::endl;
    for(int i = 0; i<m_ucty.size();i++){
        if(m_ucty.at(i)->getOsobu() == osoba){
            m_ucty.at(i)->tiskni();
        }
    }
}
int Ucetnictvi::cenaCelkem(){
    int cena = 0;
    for(int i = 0; i<m_ucty.size(); i++){
        cena+=m_ucty.at(i)->getUhrada();
    }
    return cena;
}
void Ucetnictvi::pridejUcet(Ucty* ucet){
    m_ucty.push_back(ucet);
}