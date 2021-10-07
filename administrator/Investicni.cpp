//
// Created by julpr on 1. 12. 2020.
//

#include "Investicni.h"

Investicni::Investicni(std::string misto, std::string popis, std::string datumPorizeni, int porizovaciCena){
    if(porizovaciCena>40000){
        m_porizovaciCena = porizovaciCena;
    }else{
        std::cout<<"error: investicni predmet musi byt drazsi nez 40000"<<std::endl;
    }
    m_misto = misto;
    m_popis = popis;
    m_datumPorizeni = datumPorizeni;
}
int Investicni::getCena(int roky){
    return (m_porizovaciCena- (0.1*m_porizovaciCena*roky));
}
void Investicni::printInfo() {
    std::cout<<"misto: "<<m_misto<<" popis: "<<m_popis<<" datum porizeni: "<<m_datumPorizeni<<"\n";
    std::cout<<"porizovaci cena: "<<m_porizovaciCena;
}
std::string Investicni::getPopis() {
    return m_popis;
}