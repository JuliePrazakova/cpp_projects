//
// Created by julpr on 3. 1. 2021.
//

#ifndef COMMAND_INTERAKCE_INTERAKCE_H
#define COMMAND_INTERAKCE_INTERAKCE_H
#include <iostream>
#include "Osoba.h"

class Interakce {
    std::string m_popis;
public:
    std::string getPopis();
    Interakce(std::string popis);
    virtual void interaguj(Osoba* kdo, Osoba* skym)=0;
};


#endif //COMMAND_INTERAKCE_INTERAKCE_H
