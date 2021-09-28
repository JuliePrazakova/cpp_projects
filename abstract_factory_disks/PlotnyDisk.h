//
// Created by julpr on 3. 1. 2021.
//

#ifndef ZKOUSKA2018_2_ABSTRAKTTOVARNA_PLOTNYDISK_H
#define ZKOUSKA2018_2_ABSTRAKTTOVARNA_PLOTNYDISK_H
#include "Disk.h"

class PlotnyDisk:public Disk {
    int m_rychlostZapisu;
public:
    int getRychlost();
    PlotnyDisk(int rychlost);
};


#endif //ZKOUSKA2018_2_ABSTRAKTTOVARNA_PLOTNYDISK_H
