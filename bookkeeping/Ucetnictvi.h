//
// Created by julpr on 4. 1. 2021.
//

#ifndef ZKOUSKA1_2_UCETNICTVI_H
#define ZKOUSKA1_2_UCETNICTVI_H
#include "Ucty.h"
#include <vector>

class Ucetnictvi {
    std::vector<Ucty*> m_ucty;
public:
    Ucetnictvi();
    void tiskniUctyOsoby(std::string osoba);
    int cenaCelkem();
    void pridejUcet(Ucty* ucet);

};


#endif //ZKOUSKA1_2_UCETNICTVI_H
