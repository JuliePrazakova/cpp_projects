//
// Created by julpr on 2. 1. 2021.
//
#include <string>
#include "PridejNaklad.h"

void PridejNaklad::provedAkci(Naklad* naklad){
    float vaha = 0;
    std::cout<<"zadej vahu zbozi: ";
    std::cin>>vaha;

    int cena = 0;
    std::cout<<"zadej cenu zbozi: ";
    std::cin>>cena;

    std::string popis = "";
    std::cout<<"zadej popis zbozi: ";
    std::cin.ignore(1);
    getline(std::cin, popis);


    std::string destinace = "";
    std::cout<<"zadej destinaci zbozi: ";
    getline(std::cin, destinace);

    naklad->pridejZbozi(Zbozi{popis,cena,vaha,destinace});
}
PridejNaklad::PridejNaklad():Akce("Pridani nakladu"){

}