//
// Created by julpr on 1. 12. 2020.
//

#ifndef TEST2_MATROS_NAKLADNI_H
#define TEST2_MATROS_NAKLADNI_H
#include "Automobil.h"

class Nakladni: public Automobil {
    int m_nosnost;
public:
    Nakladni(int nosnost, int najeto, int cena, std::string model);
    int getCena();
    void printInfo();
};


#endif //TEST2_MATROS_NAKLADNI_H
