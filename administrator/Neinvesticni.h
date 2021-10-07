//
// Created by julpr on 1. 12. 2020.
//

#ifndef TEST2_NEINVESTICNI_H
#define TEST2_NEINVESTICNI_H
#include "Predmet.h"

class Neinvesticni: public Predmet {
    std::string m_majitel;
public:
    Neinvesticni(std::string majitel, std::string popis, std::string datumPorizeni, int porizovaciCena);
    int getCena(int roky);
    void printInfo();
    std::string getPopis();
};


#endif //TEST2_NEINVESTICNI_H
