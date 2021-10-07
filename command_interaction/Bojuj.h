//
// Created by julpr on 3. 1. 2021.
//

#ifndef COMMAND_INTERAKCE_BOJUJ_H
#define COMMAND_INTERAKCE_BOJUJ_H
#include "Interakce.h"

class Bojuj:public Interakce {
public:
    Bojuj();
    void interaguj(Osoba* kdo, Osoba* skym);
};


#endif //COMMAND_INTERAKCE_BOJUJ_H
