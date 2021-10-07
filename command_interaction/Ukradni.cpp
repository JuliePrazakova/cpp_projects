//
// Created by julpr on 3. 1. 2021.
//

#include "Ukradni.h"

Ukradni::Ukradni():Interakce("ukradni"){

}
void Ukradni::interaguj(Osoba* kdo, Osoba* skym){
    std::cout << "Zacina kradez zbozi postavou " << kdo->getJmeno() << " od " << skym->getJmeno() <<  std::endl;

    // zlepsena verze muze umoznit vyber predmetu
    Predmet* neco = skym->getPredmet(0);
    if (neco != nullptr){
        kdo->seberPredmet(neco);
        skym->odeberPredmet(0);
        std::cout << "Ukradeno: " << neco->jmeno <<  std::endl;
    } else {
        std::cout << "Neni nic k ukradeni" <<  std::endl;
    }

    std::cout << "Konci kradez zbozi postavou " << kdo->getJmeno() << " od " << skym->getJmeno() <<  std::endl;
}