//
// Created by julpr on 3. 1. 2021.
//

#ifndef COMMAND_INTERAKCE_OSOBA_H
#define COMMAND_INTERAKCE_OSOBA_H
#include <iostream>
#include <vector>
#include "Predmet.h"

class Interakce;

class Osoba {
    std::vector<Interakce*> m_interakce;
    std::vector<Predmet*>m_predmety;
    std::string m_jmeno;
    int m_sila;
    int m_zdravi;
public:
    Osoba(std::string jmeno, int sila, int zdravi);
    void interaguj(Osoba* druhaOsoba);
    void vypisInterakce();
    void naucInterakce(Interakce* interakce);
    void seberPredmet(Predmet* predmet);
    int getSila();
    int getZdravi();
    Predmet* getPredmet(int index);
    void odeberPredmet(int index);
    void uberZdravi(int kolik);
    std::string getJmeno();

private:
    int rozhodnutiUzivatele();

};


#endif //COMMAND_INTERAKCE_OSOBA_H
