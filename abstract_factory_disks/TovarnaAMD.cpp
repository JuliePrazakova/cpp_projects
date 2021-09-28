//
// Created by julpr on 3. 1. 2021.
//

#include "TovarnaAMD.h"

Procesor* TovarnaAMD::createProcesor(){
    Procesor* amd= new AMD(1000,8);
    return amd;
}
Disk* TovarnaAMD::createDisk(){
    Disk* disk = new PlotnyDisk(5400);
    return disk;
}