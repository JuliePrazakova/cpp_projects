//
// Created by julpr on 25. 12. 2020.
//

#include "Dementor.h"


Dementor::Dementor(int power){
    m_type = "dementor";
    m_power=power;
}
void Dementor::print(){
    std::cout<<"D";
}

std::string Dementor::getType(){
    return m_type;
}