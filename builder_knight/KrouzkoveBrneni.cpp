//
// Created by julpr on 3. 1. 2021.
//

#include "KrouzkoveBrneni.h"

KrouzkoveBrneni::KrouzkoveBrneni(int vaha, int odolnost):Brneni(vaha,odolnost){

}
void KrouzkoveBrneni::printInfo(){
    std::cout<<"vaha: " <<m_vaha<<std::endl;
    std::cout<<"odolnost: " <<m_odolnost<<std::endl;
}
int KrouzkoveBrneni::getBonusObrany(){
    return 10;
}
int KrouzkoveBrneni::getBonusUtoku(){
    return 10;
}