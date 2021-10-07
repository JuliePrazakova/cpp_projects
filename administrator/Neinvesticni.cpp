//
// Created by julpr on 1. 12. 2020.
//

#include "Neinvesticni.h"

Neinvesticni::Neinvesticni(std::string majitel, std::string popis, std::string datumPorizeni, int porizovaciCena){
    m_majitel = majitel;
    m_popis=popis;
    m_porizovaciCena = porizovaciCena;
    m_datumPorizeni = datumPorizeni;
}
int Neinvesticni::getCena(int roky){
    if(roky<3){
        return(m_porizovaciCena-((1/3)*m_porizovaciCena)*roky);
    }else{
        return 0;
    }

}
void Neinvesticni::printInfo() {
    std::cout<<"majitel: "<<m_majitel<<" popis: "<<m_popis<<" datum porizeni: "<<m_datumPorizeni<<"\n";
    std::cout<<"porizovaci cena: "<<m_porizovaciCena;
}

std::string Neinvesticni::getPopis() {
    return m_popis;
}