//
// Created by julpr on 25. 12. 2020.
//

#include "Patronus.h"

Patronus::Patronus(std::string subject){
    m_subject = subject;
    m_type = "patronus";
}
void Patronus::print(){
    std::cout<<"P";
}
std::string Patronus::getType(){
    return m_type;
}
