//
// Created by julpr on 4. 1. 2021.
//

#ifndef ZKOUSKA1_2_OBJEDNAVKY_H
#define ZKOUSKA1_2_OBJEDNAVKY_H
#include "Ucty.h"

class Objednavky:public Ucty {
    std::string m_adresa;
public:
    Objednavky(std::string firma, std::string datum, std::string osoba, std::string adresa, int uhrada);
    void zmenOsobu(std::string druhaOsoba);
    void tiskni();
};


#endif //ZKOUSKA1_2_OBJEDNAVKY_H
