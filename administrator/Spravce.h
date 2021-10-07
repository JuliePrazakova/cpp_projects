//
// Created by julpr on 1. 12. 2020.
//

#ifndef TEST2_SPRAVCE_H
#define TEST2_SPRAVCE_H
#include "Investicni.h"
#include "Predmet.h"
#include "Neinvesticni.h"
#include <vector>

class Spravce {
    std::vector<Predmet*> m_predmety;

public:
    Spravce();
    void vypisPodlePopisu(std::string popis);
    void pridejPredmet(Predmet* predmet);
};


#endif //TEST2_SPRAVCE_H
