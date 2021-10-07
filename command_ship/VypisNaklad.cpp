//
// Created by julpr on 2. 1. 2021.
//

#include "VypisNaklad.h"

void VypisNaklad::provedAkci(Naklad* naklad) {
    int pocetPrvku = naklad->getPocetZbozi();
    for(int i = 0; i<pocetPrvku; i++){
        std::cout<<"popis: "<< naklad->getZbozi(i).popis<<std::endl;
    }
}
VypisNaklad::VypisNaklad() :Akce("Vypsani nakladu"){

}