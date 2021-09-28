//
// Created by julpr on 4. 1. 2021.
//

#ifndef ZKOUSKA1_DULNIMESTOBUILDER_H
#define ZKOUSKA1_DULNIMESTOBUILDER_H
#include "MestoBuilder.h"

class DulniMestoBuilder:public MestoBuilder {
public:
    DulniMestoBuilder(){};
    void createMesto(std::string jmeno, int uspory);
};


#endif //ZKOUSKA1_DULNIMESTOBUILDER_H
