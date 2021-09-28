//
// Created by julpr on 4. 1. 2021.
//

#ifndef ZKOUSKA1_MESTODIRECTOR_H
#define ZKOUSKA1_MESTODIRECTOR_H
#include "MestoBuilder.h"

class MestoDirector {
    MestoBuilder* m_builder;
public:
    MestoDirector(MestoBuilder* builder);
    void setBuilder(MestoBuilder* builder);
    Mesto* createMesto(std::string jmeno, int uspory);
    void printInfo();
};


#endif //ZKOUSKA1_MESTODIRECTOR_H
