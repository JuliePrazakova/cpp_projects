//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKO10_UTERY2_IS_H
#define CVIKO10_UTERY2_IS_H
#include <iostream>
#include <vector>
#include "Kniha.h"


class IS {
    static std::vector<Kniha*> s_knihy;
    IS(){};
public:
    static void createKnihu(std::string autor, std::string nazev, int rokVydani);
    static void odeberKnihu(int ID);
    static void printInfo();
    static void changeStatus(std::string nazev, Status status);
    static int pocetKnihOdRoku(int rok);
    static void statistika();
    static std::vector<Kniha*> getKnihyPodleStatusu(Status status);
};


#endif //CVIKO10_UTERY2_IS_H
