//
// Created by julpr on 3. 1. 2021.
//

#ifndef ZKOUSKA2018_2_ABSTRAKTTOVARNA_SSD_H
#define ZKOUSKA2018_2_ABSTRAKTTOVARNA_SSD_H
#include "Disk.h"

class SSD:public Disk {
    int m_rychlostZapisu;
    int m_hloubkaZapisu;
public:
    SSD(int rychlost, int hloubka);
    int getRychlost();
};


#endif //ZKOUSKA2018_2_ABSTRAKTTOVARNA_SSD_H
