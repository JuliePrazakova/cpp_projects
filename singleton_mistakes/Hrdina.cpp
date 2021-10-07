//
// Created by julpr on 2. 1. 2021.
//

#include "Hrdina.h"

Hrdina* Hrdina::createHrdina(std::string jmeno, Povolani povolani) {
    Hrdina* novyHrdina = nullptr;

    if(jmeno == ""){
        SpravceChyb* spravce = SpravceChyb::getSpravceChyb();
        spravce->pridejChybu(Chyba{"createHrdina","Hrdina","prazdne jmeno"});

    }

    if(povolani == Povolani::Rytir){
        novyHrdina = new Hrdina(jmeno,30,10,15,povolani);
    }else if(povolani == Povolani::Hranicar){
        novyHrdina = new Hrdina(jmeno,20,20,20,povolani);

    }else if(povolani == Povolani::Zlodej){
        novyHrdina = new Hrdina(jmeno,5,30,25,povolani);

    }else {

        SpravceChyb* spravce = SpravceChyb::getSpravceChyb();
        spravce->pridejChybu(Chyba{"createHrdina","Hrdina","neexistujici povolani"});
    }

    return novyHrdina;
}
Hrdina::Hrdina(std::string jmeno,int sila, int obratnost, int odolnost, Povolani povolani) {
   m_jmeno = jmeno;
    m_sila = sila;
    m_obratnost = obratnost;
    m_odolnost = odolnost;
    m_povolani = povolani;
}
void Hrdina::print() {
    std::cout<<"jmeno: "<<m_jmeno<<std::endl;
    std::cout<<"sila, obratnost, odolnost: "<< m_sila<<", "<<m_obratnost<<", "<<m_odolnost<<"\n" ;
    std::cout<<"povolani: "<< this->printPovolani();
}
std::string Hrdina::printPovolani() {
    if (m_povolani == Povolani::Rytir) {
       return "Rytir";
    } else if (m_povolani == Povolani::Hranicar) {
        return "Hranicar";

    } else if (m_povolani == Povolani::Zlodej) {
        return "Zlodej";

    }
}