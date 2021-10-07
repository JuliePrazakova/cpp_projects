//
// Created by julpr on 1. 12. 2020.
//

#include "Osobni.h"
Osobni::Osobni(int nabourano, int najeto, int cena, std::string model){
    m_najetoKm = najeto;
    m_bourano = nabourano;
    m_puvodniCena = cena;
    m_model = model;
}

int Osobni::getCena() {
    return (1-(m_najetoKm/300000))*m_puvodniCena*(1-0.5*m_bourano);
}

void Osobni::printInfo(){
    std::cout<<"model: "<<m_model<<std::endl<< "najeto km: "<<m_najetoKm<<std::endl;
    std::cout<<"puvodni cena: "<<m_puvodniCena<<"\n";
    std::cout<<"auto nabouralo: "<<m_bourano<<std::endl;
}