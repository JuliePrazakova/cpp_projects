//
// Created by julpr on 3. 1. 2021.
//

#include "TovarnaIntel.h"

Procesor* TovarnaIntel::createProcesor(){
    Procesor* intel = new Intel(2000);
    return intel;
}
Disk* TovarnaIntel::createDisk(){
    Disk* disk = new SSD(7200,10);
    return disk;
}