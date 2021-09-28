//
// Created by julpr on 3. 1. 2021.
//

#include "DopravniLetadlo.h"

DopravniLetadlo::DopravniLetadlo(int pocetPasazeru, std::string oznaceni, int spotreba):Letadlo(spotreba, oznaceni){
    m_pocetPasazeru = pocetPasazeru;
}
float DopravniLetadlo::getSpotreba(){
        return (m_pocetPasazeru*90)/m_spotreba;
}
void DopravniLetadlo::printInfo(){
    std::cout<<"oznaceni: "<<m_oznaceni<<std::endl;
    std::cout<<"spotreba: "<<m_spotreba<<std::endl;
    std::cout<<"pocet pasazeru: "<<m_pocetPasazeru<<std::endl;

    std::cout<<std::endl;
}