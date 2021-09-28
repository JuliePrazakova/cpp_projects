//
// Created by julpr on 3. 1. 2021.
//

#ifndef ZKOUSKA2018_2_ABSTRAKTTOVARNA_TOVARNA_H
#define ZKOUSKA2018_2_ABSTRAKTTOVARNA_TOVARNA_H
#include "Disk.h"
#include "Procesor.h"

class Tovarna {
public:
    Tovarna(){};
    virtual Procesor* createProcesor()=0;
    virtual Disk* createDisk()=0;
};


#endif //ZKOUSKA2018_2_ABSTRAKTTOVARNA_TOVARNA_H
