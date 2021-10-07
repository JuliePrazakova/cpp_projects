//
// Created by julpr on 3. 1. 2021.
//

#ifndef ZKOUSKA2018_NAKLADNILETADLO_H
#define ZKOUSKA2018_NAKLADNILETADLO_H
#include "Letadlo.h"

class NakladniLetadlo: public Letadlo {
    int m_vahaZavProstoru;
public:
    NakladniLetadlo(int vaha, std::string oznaceni, int spotreba);
     float getSpotreba();
     void printInfo();
};


#endif //ZKOUSKA2018_NAKLADNILETADLO_H
