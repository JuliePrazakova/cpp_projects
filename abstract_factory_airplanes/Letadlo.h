//
// Created by julpr on 3. 1. 2021.
//

#ifndef ZKOUSKA2018_LETADLO_H
#define ZKOUSKA2018_LETADLO_H
#include <iostream>

class Letadlo {
protected:
   int m_spotreba;
   std::string m_oznaceni;
public:
    Letadlo(int spotreba, std::string oznaceni);
    virtual float getSpotreba()=0;
    virtual void printInfo()=0;
};


#endif //ZKOUSKA2018_LETADLO_H
