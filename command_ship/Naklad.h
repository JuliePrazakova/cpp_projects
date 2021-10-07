//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKA12_PONDELI2_NAKLAD_H
#define CVIKA12_PONDELI2_NAKLAD_H
#include "Zbozi.h"
#include <vector>

class Naklad {
    std::vector<Zbozi> m_naklad;
public:
    Naklad(){};
    Zbozi getZbozi(int ktere);
    int getPocetZbozi();
    void pridejZbozi(Zbozi zbozi);
};


#endif //CVIKA12_PONDELI2_NAKLAD_H
