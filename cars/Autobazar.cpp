//
// Created by julpr on 1. 12. 2020.
//

#include "Autobazar.h"

void Autobazar::vypisAuta(){
    for(Automobil* car:m_vozidla){
        car->printInfo();
    }
}
int Autobazar::getMajetek(){
    int majetek = 0;
    for(Automobil* car: m_vozidla){
        majetek+=car->getCena();
    }
    return majetek;
}
void Autobazar::pridejAutomobil(Automobil* car){
    m_vozidla.push_back(car);
}
void Autobazar::stocKilometry(std::string model, int pocet){
    for(Automobil* car:m_vozidla){
        if(car->getModel() == model){
            car->setNajetoKm(car->getNajetoKm()-pocet);
        }
    }
}