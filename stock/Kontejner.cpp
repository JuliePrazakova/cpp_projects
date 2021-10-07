//
// Created by julpr on 9. 11. 2020.
//

#include "Kontejner.h"


Kontejner::Kontejner(std::string popis){
    m_popis = popis;
}

void Kontejner::vypisObsah() {
    std::cout<<"Popis: "<< m_popis<< std::endl;
}
