//
// Created by julpr on 3. 1. 2021.
//

#include "PlotnyDisk.h"

int PlotnyDisk::getRychlost(){
    return m_rychlostZapisu;
}
PlotnyDisk::PlotnyDisk(int rychlost){
    m_rychlostZapisu = rychlost;
}