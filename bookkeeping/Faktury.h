//
// Created by julpr on 4. 1. 2021.
//

#ifndef ZKOUSKA1_2_FAKTURY_H
#define ZKOUSKA1_2_FAKTURY_H
#include "Ucty.h"

class Faktury: public Ucty{
    int m_cisloUctu;
public:
    Faktury(std::string firma,std::string datum,std::string osoba,int cisloUctu, int uhrada);
    void zmenOsobu(std::string druhaOsoba);
    void tiskni();
};


#endif //ZKOUSKA1_2_FAKTURY_H
