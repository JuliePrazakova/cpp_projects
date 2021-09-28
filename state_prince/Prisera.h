//
// Created by julpr on 3. 1. 2021.
//

#ifndef STAV_PRINC_PRISERA_H
#define STAV_PRINC_PRISERA_H
#include "Princ.h"
#include "Zabak.h"

class Prisera {
    Stav* m_stav;
public:
    Prisera();
    void privitej();
    void rozlucSe();
    void polibek();
    ~Prisera();
};


#endif //STAV_PRINC_PRISERA_H
