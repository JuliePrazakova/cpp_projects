//
// Created by julpr on 4. 1. 2021.
//

#ifndef ZKOUSKA1_ALCHYMISTICKEMESTOBUILDER_H
#define ZKOUSKA1_ALCHYMISTICKEMESTOBUILDER_H
#include "MestoBuilder.h"

class AlchymistickeMestoBuilder:public MestoBuilder {
public:
    AlchymistickeMestoBuilder(){};
    void createMesto(std::string jmeno, int uspory);
};


#endif //ZKOUSKA1_ALCHYMISTICKEMESTOBUILDER_H
