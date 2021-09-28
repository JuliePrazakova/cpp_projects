//
// Created by julpr on 3. 1. 2021.
//

#ifndef ZKOUSKA2018_2_ABSTRAKTTOVARNA_PROCESOR_H
#define ZKOUSKA2018_2_ABSTRAKTTOVARNA_PROCESOR_H
#include <iostream>

class Procesor {
public:
    Procesor(){};
    ~Procesor(){};
    virtual int getVykon()=0;
};


#endif //ZKOUSKA2018_2_ABSTRAKTTOVARNA_PROCESOR_H
