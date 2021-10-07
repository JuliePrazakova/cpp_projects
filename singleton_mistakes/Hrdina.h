//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKA10_PONDELI_HRDINA_H
#define CVIKA10_PONDELI_HRDINA_H
#include <iostream>
#include "SpravceChyb.h"

enum class Povolani{
    Hranicar, Rytir, Zlodej
};

class Hrdina {
    std::string m_jmeno;
    int m_sila;
    int m_obratnost;
    int m_odolnost;
    Povolani m_povolani;

    Hrdina(std::string jmeno,int sila, int obratnost, int odolnost, Povolani povolani);

public:
    static Hrdina* createHrdina(std::string jmeno,Povolani povolani);
    void print();
    std::string printPovolani();
};


#endif //CVIKA10_PONDELI_HRDINA_H
