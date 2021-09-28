//
// Created by julpr on 3. 1. 2021.
//

#include "Prezencni.h"

int Prezencni::getZbyvajiciRokyZdarma(float semestrStudia){
    return 12-semestrStudia;
}
int Prezencni::getStipendium(float prumer){
    return int(100000/prumer);
}