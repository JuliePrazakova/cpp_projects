//
// Created by julpr on 3. 1. 2021.
//

#ifndef ZKOUSKA2018_2_ABSTRAKTTOVARNA_AMD_H
#define ZKOUSKA2018_2_ABSTRAKTTOVARNA_AMD_H
#include "Procesor.h"

class AMD:public Procesor {
int m_frekvence;
int m_cache;
public:
    int getVykon();
    AMD(int frekvence, int cache);
};


#endif //ZKOUSKA2018_2_ABSTRAKTTOVARNA_AMD_H
