//
// Created by julpr on 3. 1. 2021.
//

#ifndef COMMAND_INTERAKCE_UKRADNI_H
#define COMMAND_INTERAKCE_UKRADNI_H
#include "Interakce.h"

class Ukradni:public Interakce {
public:
    Ukradni();
    void interaguj(Osoba* kdo, Osoba* skym);

};


#endif //COMMAND_INTERAKCE_UKRADNI_H
