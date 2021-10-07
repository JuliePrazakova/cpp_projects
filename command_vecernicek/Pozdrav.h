//
// Created by julpr on 3. 1. 2021.
//

#ifndef COMMAND_VECERNICEK_POZDRAV_H
#define COMMAND_VECERNICEK_POZDRAV_H
#include <iostream>

class Pozdrav {
public:
    Pozdrav(){};
    virtual void privitani()=0;
    virtual void rozlouceni()=0;

};


#endif //COMMAND_VECERNICEK_POZDRAV_H
