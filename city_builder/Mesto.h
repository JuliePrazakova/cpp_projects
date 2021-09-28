//
// Created by julpr on 4. 1. 2021.
//

#ifndef ZKOUSKA1_MESTO_H
#define ZKOUSKA1_MESTO_H
#include <iostream>
#include "Budova.h"
#include <vector>

class Mesto {
    std::string m_jmeno;
    int m_uspory;
    int m_komfortZivota;
    int m_cenaZaBydleni;
    std::vector<Budova*> m_budovy;
public:
    Mesto(std::string jmeno, int uspory);
    std::string getJmeno();
    int getStavUspor();
    int getKomfortZivota();
    int getCenaZaBydleni();

    void pridejBudovu(Budova* budova);
    void setCenaZaBydleni(int cena);
    void setKomfortZivota(int komfort);
    void printInfo();
};


#endif //ZKOUSKA1_MESTO_H
