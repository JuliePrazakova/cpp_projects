//
// Created by julpr on 3. 1. 2021.
//

#ifndef STAV_STUDENT_STUDENT_H
#define STAV_STUDENT_STUDENT_H
#include <iostream>
#include "Dalkove.h"
#include "Prezencni.h"

class Student {
    float m_prumer;
    float m_pocetSemestru;
    Studium* m_studium;
public:
    Student(bool prezencni, float prumer, float semestr);
    void getPocetLetZdarma();
    void getStipendium();
    int getPocetSemestru();
    void setPocetSemestru(int pocetS);
    void prejdiNaDalkove();
    void prejdiNaPrezencni();
    void setPrumer(float prumer);
};


#endif //STAV_STUDENT_STUDENT_H
