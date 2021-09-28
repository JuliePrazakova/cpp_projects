//
// Created by julpr on 3. 1. 2021.
//

#ifndef ZKOUSKA2018_2_ABSTRAKTTOVARNA_TOVARNAINTEL_H
#define ZKOUSKA2018_2_ABSTRAKTTOVARNA_TOVARNAINTEL_H
#include "Intel.h"
#include "SSD.h"
#include "Tovarna.h"

class TovarnaIntel:public Tovarna {
public:
    TovarnaIntel(){};
    Procesor* createProcesor();
    Disk* createDisk();
};


#endif //ZKOUSKA2018_2_ABSTRAKTTOVARNA_TOVARNAINTEL_H
