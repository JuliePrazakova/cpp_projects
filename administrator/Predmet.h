//
// Created by julpr on 1. 12. 2020.
//

#ifndef TEST2_PREDMET_H
#define TEST2_PREDMET_H
#include <iostream>

class Predmet {
protected:
    std::string m_popis;
    int m_porizovaciCena;
    std::string m_datumPorizeni;

public:
    virtual void printInfo();
    virtual int getCena();
    virtual std::string getPopis();
};


#endif //TEST2_PREDMET_H
