//
// Created by julpr on 2. 1. 2021.
//

#ifndef CVIKO10_UTERY2_KNIHA_H
#define CVIKO10_UTERY2_KNIHA_H
#include <iostream>


enum class Status{
    Ztracena, Pujcena, Dostupna
};

class Kniha {
    std::string m_autor;
    std::string m_nazev;
    int m_rokVydani;
    Status m_status;
    int m_ID;
    static int s_instance;

public:
    Kniha(std::string autor, std::string nazev, int rokVydani);
    int getID();
    int getRokVydani();
    std::string getStatusString();
    Status getStatus();
    std::string getNazev();
    void printInfo();
    void setStatus(Status status);
};


#endif //CVIKO10_UTERY2_KNIHA_H
