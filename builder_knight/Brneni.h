//
// Created by julpr on 3. 1. 2021.
//

#ifndef MAIN_CPP_BRNENI_H
#define MAIN_CPP_BRNENI_H
#include <iostream>

class Brneni {
protected:
    int m_vaha;
    int m_odolnost;
public:
    Brneni(int vaha, int odolnost);
    virtual int getBonusObrany()=0;
    virtual int getBonusUtoku()=0;
    virtual void printInfo()=0;
};


#endif //MAIN_CPP_BRNENI_H
