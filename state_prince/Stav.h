//
// Created by julpr on 3. 1. 2021.
//

#ifndef STAV_PRINC_STAV_H
#define STAV_PRINC_STAV_H
#include <iostream>

class Stav {
public:
    Stav();
    virtual void rozlucSe()=0;
    virtual void privitej()=0;
    ~Stav();
};


#endif //STAV_PRINC_STAV_H
