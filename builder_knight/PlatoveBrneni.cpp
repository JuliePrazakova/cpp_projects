//
// Created by julpr on 3. 1. 2021.
//

#include "PlatoveBrneni.h"

PlatoveBrneni::PlatoveBrneni(int vaha, int odolnost, int ohybnost):Brneni(vaha, odolnost){
    m_ohybnost = ohybnost;
}
void PlatoveBrneni::printInfo(){
    std::cout<<"vaha: "<<m_vaha<<std::endl;
    std::cout<<"sila: "<<m_odolnost<<std::endl;
    std::cout<<"ohybnost: "<<m_ohybnost<<std::endl;
}
int PlatoveBrneni::getBonusUtoku(){
    return 10;
}
int PlatoveBrneni::getBonusObrany(){
    return 10;
}