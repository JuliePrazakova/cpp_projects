//
// Created by julpr on 1. 12. 2020.
//

#ifndef TEST2_INVESTICNI_H
#define TEST2_INVESTICNI_H
#include "Predmet.h"

class Investicni: public Predmet {
    std::string m_misto;
public:
    Investicni(std::string misto, std::string popis, std::string datumPorizeni, int porizovaciCena);
    int getCena(int roky);
    void printInfo();
    std::string getPopis();
};


#endif //TEST2_INVESTICNI_H
