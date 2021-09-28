//
// Created by julpr on 3. 1. 2021.
//

#ifndef ZKOUSKA2018_2_ABSTRAKTTOVARNA_TOVARNAAMD_H
#define ZKOUSKA2018_2_ABSTRAKTTOVARNA_TOVARNAAMD_H
#include "AMD.h"
#include "PlotnyDisk.h"
#include "Tovarna.h"

class TovarnaAMD:public Tovarna {
public:
    TovarnaAMD(){};
    Procesor* createProcesor();
    Disk* createDisk();
};


#endif //ZKOUSKA2018_2_ABSTRAKTTOVARNA_TOVARNAAMD_H
