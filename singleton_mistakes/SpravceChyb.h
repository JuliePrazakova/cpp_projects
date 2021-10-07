//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKA10_PONDELI_SPRAVCECHYB_H
#define CVIKA10_PONDELI_SPRAVCECHYB_H
#include <iostream>
#include <vector>
#include "Chyba.h"


class SpravceChyb {
    std::vector<Chyba> m_chyby;
    static SpravceChyb* s_spravce;

    SpravceChyb();

    //podle navrhoveho vzoru NEMUSI byt destruktor private ale na ans priklad se to hodi
    ~SpravceChyb();

public:
    void pridejChybu(Chyba chyba);
    void print();
    static SpravceChyb* getSpravceChyb();
};


#endif //CVIKA10_PONDELI_SPRAVCECHYB_H
