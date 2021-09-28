//
// Created by julpr on 3. 1. 2021.
//

#ifndef STAV_STUDENT_STUDIUM_H
#define STAV_STUDENT_STUDIUM_H


class Studium {
public:
    Studium(){};
    virtual int getZbyvajiciRokyZdarma(float semestrStudia)=0;
    virtual int getStipendium(float prumer)=0;
};


#endif //STAV_STUDENT_STUDIUM_H
