//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKA12_PONDELI2_VYPISNAKLAD_H
#define CVIKA12_PONDELI2_VYPISNAKLAD_H
#include "Akce.h"

class VypisNaklad: public Akce {
    void provedAkci(Naklad* naklad);

public:
    VypisNaklad();
};


#endif //CVIKA12_PONDELI2_VYPISNAKLAD_H
