//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKA12_PONDELI2_PRIDEJNAKLAD_H
#define CVIKA12_PONDELI2_PRIDEJNAKLAD_H
#include "Akce.h"

class PridejNaklad:public Akce {

public:
    void provedAkci(Naklad* naklad);
    PridejNaklad();
};


#endif //CVIKA12_PONDELI2_PRIDEJNAKLAD_H
