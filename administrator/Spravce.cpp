//
// Created by julpr on 1. 12. 2020.
//

#include "Spravce.h"
Spravce::Spravce(){
    m_predmety = {nullptr};
}
void Spravce::vypisPodlePopisu(std::string popis){
    for(Predmet* vec:m_predmety){
        if(vec->getPopis()== popis){
            vec->printInfo();
        }
    }
}
void Spravce::pridejPredmet(Predmet* predmet){
    m_predmety.push_back(predmet);
}