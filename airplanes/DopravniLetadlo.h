//
// Created by julpr on 3. 1. 2021.
//

#ifndef ZKOUSKA2018_DOPRAVNILETADLO_H
#define ZKOUSKA2018_DOPRAVNILETADLO_H
#include "Letadlo.h"

class DopravniLetadlo:public Letadlo {
    int m_pocetPasazeru;
public:
    DopravniLetadlo(int pocetPasazeru, std::string oznaceni, int spotreba);
    float getSpotreba();
    void printInfo();
};


#endif //ZKOUSKA2018_DOPRAVNILETADLO_H
