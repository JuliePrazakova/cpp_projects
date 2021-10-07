//
// Created by julpr on 1. 12. 2020.
//

#include "Nakladni.h"

Nakladni::Nakladni(int nosnost, int najeto, int cena, std::string model){
    m_najetoKm = najeto;
     m_nosnost= nosnost;
    m_puvodniCena = cena;
    m_model = model;
}

int Nakladni::getCena() {
    return (1-(m_najetoKm/500000))*m_puvodniCena;
}

void Nakladni::printInfo(){
    std::cout<<"model: "<<m_model<<std::endl<< "najeto km: "<<m_najetoKm<<std::endl;
    std::cout<<"puvodni cena: "<<m_puvodniCena<<"\n";
    std::cout<<"nosnost: "<<m_nosnost<<std::endl;
}