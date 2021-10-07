//
// Created by julpr on 30. 11. 2020.
//

#ifndef ZAMESTNANCI_CVICENI_PRACOVNIPOZICE_H
#define ZAMESTNANCI_CVICENI_PRACOVNIPOZICE_H
#include <iostream>

class PracovniPozice {
protected:
     int m_zakladPlatu;
    int m_pocetLetNaPozici;
    std::string m_pozice;
public:
    virtual int vratPlat();
};


#endif //ZAMESTNANCI_CVICENI_PRACOVNIPOZICE_H
