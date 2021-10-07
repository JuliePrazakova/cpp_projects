//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKA12_PONDELI2_AKCE_H
#define CVIKA12_PONDELI2_AKCE_H
#include <iostream>
#include "Naklad.h"

class Akce {
    std::string m_popis;
public:
    Akce(std::string popis);
    virtual void provedAkci(Naklad* naklad) = 0;
    std::string getPopis();
};


#endif //CVIKA12_PONDELI2_AKCE_H
