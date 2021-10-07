//
// Created by julpr on 2. 1. 2021.
//

#include "Kniha.h"

int Kniha::s_instance = 0;

Kniha::Kniha(std::string autor, std::string nazev, int rokVydani){
    m_autor = autor;
    m_nazev = nazev;
    m_status = Status::Dostupna;
    m_rokVydani = rokVydani;

    s_instance+=1;
    m_ID = s_instance;
}
int Kniha::getID() {
    return m_ID;
}
int Kniha::getRokVydani() {
    return m_rokVydani;
}
std::string Kniha::getStatusString(){
    if(m_status == Status::Dostupna){
        return "Dostupna";
    }else if(m_status == Status::Pujcena){
        return "Pujcena";
    }else if(m_status == Status::Ztracena){
        return "Ztracena";
    }else {return "neznamy stav";}
}
Status Kniha::getStatus(){
    return m_status;
}

void Kniha::printInfo() {
    std::cout<<"autor: "<<m_autor<<"\n";
    std::cout<<"nazev knihy: "<<m_nazev<<"\n";
    std::cout<<"rok vydani: "<<m_rokVydani<<"\n";
    std::cout<<"status: "<<getStatusString()<<"\n";
}
void Kniha::setStatus(Status status){
    m_status = status;
}
std::string Kniha::getNazev(){
    return m_nazev;
}
