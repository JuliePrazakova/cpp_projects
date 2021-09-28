//
// Created by julpr on 4. 1. 2021.
//

#ifndef ZKOUSKA1_MESTOBUILDER_H
#define ZKOUSKA1_MESTOBUILDER_H
#include "Mesto.h"
#include "Budova.h"

class MestoBuilder {
protected:
    Mesto* m_mesto;
public:
    MestoBuilder();
    virtual void createMesto(std::string jmeno, int uspory)=0;
    Mesto* getMesto();
    void printInfo();
};


#endif //ZKOUSKA1_MESTOBUILDER_H
