//
// Created by julpr on 4. 1. 2021.
//

#ifndef ZKOUSKA1_2_UCTY_H
#define ZKOUSKA1_2_UCTY_H
#include <iostream>

class Ucty {
protected:
    std::string m_firma;
    std::string m_datum;
    std::string m_osoba;
    int m_kUhrade;
public:
    Ucty(std::string firma, std::string datum, std::string osoba, int uhrada);
    virtual void zmenOsobu(std::string druhaOsoba)=0;
    std::string getOsobu();
    int getUhrada();
    virtual void tiskni()=0;
};


#endif //ZKOUSKA1_2_UCTY_H
