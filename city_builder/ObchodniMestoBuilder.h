//
// Created by julpr on 4. 1. 2021.
//

#ifndef ZKOUSKA1_OBCHODNIMESTOBUILDER_H
#define ZKOUSKA1_OBCHODNIMESTOBUILDER_H
#include "MestoBuilder.h"

class ObchodniMestoBuilder: public MestoBuilder {
public:
    ObchodniMestoBuilder(){};
    void createMesto(std::string jmeno, int uspory);

};


#endif //ZKOUSKA1_OBCHODNIMESTOBUILDER_H
