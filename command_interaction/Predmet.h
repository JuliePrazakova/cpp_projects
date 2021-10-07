//
// Created by julpr on 3. 1. 2021.
//

#ifndef COMMAND_INTERAKCE_PREDMET_H
#define COMMAND_INTERAKCE_PREDMET_H
#include <iostream>

struct Predmet {
    std::string jmeno;
    Predmet(){
        jmeno = "";
    }

    Predmet(std::string jmeno){
        this->jmeno = jmeno;
    }
};


#endif //COMMAND_INTERAKCE_PREDMET_H
