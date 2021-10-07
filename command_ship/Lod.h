//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKA12_PONDELI2_LOD_H
#define CVIKA12_PONDELI2_LOD_H
#include "Naklad.h"
#include "Akce.h"
#include "VypisNaklad.h"
#include "PridejNaklad.h"

class Lod {
    std::vector<Akce*> m_akce;
    Naklad* m_naklad;
public:
    Lod();
    void provedAkci();
    void ulozAkci(Akce* akce);
    ~Lod();
};


#endif //CVIKA12_PONDELI2_LOD_H
