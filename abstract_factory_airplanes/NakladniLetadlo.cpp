//
// Created by julpr on 3. 1. 2021.
//

#include "NakladniLetadlo.h"

NakladniLetadlo::NakladniLetadlo(int vaha, std::string oznaceni, int spotreba):Letadlo(spotreba,oznaceni){
    m_vahaZavProstoru = vaha;
}
float NakladniLetadlo::getSpotreba(){
    return m_spotreba*(m_vahaZavProstoru/30);
}
void NakladniLetadlo::printInfo(){
    std::cout<<"oznaceni: "<<m_oznaceni<<std::endl;
    std::cout<<"spotreba: "<<m_spotreba<<std::endl;
    std::cout<<"vaha zavazadloveho prostoru: "<<m_vahaZavProstoru<<std::endl;

    std::cout<<std::endl;
}