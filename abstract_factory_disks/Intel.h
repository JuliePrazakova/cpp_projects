//
// Created by julpr on 3. 1. 2021.
//

#ifndef ZKOUSKA2018_2_ABSTRAKTTOVARNA_INTEL_H
#define ZKOUSKA2018_2_ABSTRAKTTOVARNA_INTEL_H
#include "Procesor.h"

class Intel:public Procesor {
    int m_frekvence;
public:
    Intel(int frekvence);
    int getVykon();
};


#endif //ZKOUSKA2018_2_ABSTRAKTTOVARNA_INTEL_H
