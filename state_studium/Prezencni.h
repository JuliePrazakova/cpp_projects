//
// Created by julpr on 3. 1. 2021.
//

#ifndef STAV_STUDENT_PREZENCNI_H
#define STAV_STUDENT_PREZENCNI_H
#include "Studium.h"

class Prezencni: public Studium {
public:
    Prezencni(){};
    int getZbyvajiciRokyZdarma(float semestrStudia);
    int getStipendium(float prumer);
};


#endif //STAV_STUDENT_PREZENCNI_H
