//
// Created by julpr on 1. 12. 2020.
//

#ifndef TEST2_MATROS_AUTOMOBIL_H
#define TEST2_MATROS_AUTOMOBIL_H
#include <iostream>

class Automobil {
protected:
    std::string m_model;
    int m_najetoKm;
    int m_puvodniCena;
public:
 //   Automobil(int cena, int km, std::string model);
    std::string getModel();
    int getNajetoKm();
    virtual int getCena();
    virtual void printInfo();
    void setNajetoKm(int km);
};


#endif //TEST2_MATROS_AUTOMOBIL_H
