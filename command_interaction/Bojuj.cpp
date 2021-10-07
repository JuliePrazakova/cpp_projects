//
// Created by julpr on 3. 1. 2021.
//

#include "Bojuj.h"

Bojuj::Bojuj():Interakce("bojuj"){

}
void Bojuj::interaguj(Osoba* kdo, Osoba* skym){
    std::cout << "Zacina boj postav " << kdo->getJmeno() << " a " << skym->getJmeno() << std::endl;

    if (kdo->getSila() > skym->getSila()){
        skym->uberZdravi(kdo->getSila()-skym->getSila());
    } else {
        kdo->uberZdravi(skym->getSila()-kdo->getSila());
    }

    std::cout << "Konci boj postav " << kdo->getJmeno() << " a " << skym->getJmeno() << std::endl;
}