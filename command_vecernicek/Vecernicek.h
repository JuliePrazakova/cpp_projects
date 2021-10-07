//
// Created by julpr on 3. 1. 2021.
//

#ifndef COMMAND_VECERNICEK_VECERNICEK_H
#define COMMAND_VECERNICEK_VECERNICEK_H
#include "Pozdrav.h"

class Vecernicek {
    Pozdrav* m_pozdrav;
public:
    Vecernicek();
    void naucPozdrav(Pozdrav* pozdrav);
    void privitej();
    void rozlucSe();

};


#endif //COMMAND_VECERNICEK_VECERNICEK_H
