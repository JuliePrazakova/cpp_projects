//
// Created by julpr on 3. 1. 2021.
//

#ifndef STAV_STUDENT_DALKOVE_H
#define STAV_STUDENT_DALKOVE_H
#include "Studium.h"

class Dalkove:public Studium {
public:
    Dalkove(){};
    int getZbyvajiciRokyZdarma(float semestrStudia);
    int getStipendium(float prumer);
};


#endif //STAV_STUDENT_DALKOVE_H
