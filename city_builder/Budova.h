//
// Created by julpr on 4. 1. 2021.
//

#ifndef ZKOUSKA1_BUDOVA_H
#define ZKOUSKA1_BUDOVA_H
#include <iostream>

class Budova {
protected:
    std::string m_nazev;
    int m_bonusKomfort;
    int m_bonusCena;
public:
    Budova(std::string nazev, int bonusCena, int bonusKomfort);
    int getBonusKomfort();
    int getBonusCena();
    void printInfo();
};


#endif //ZKOUSKA1_BUDOVA_H
