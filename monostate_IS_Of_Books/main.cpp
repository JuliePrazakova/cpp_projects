#include <iostream>
#include "IS.h"

int main() {
    IS::createKnihu("Lancelot","Bratrstvo",2000);
    IS::createKnihu("Meryl","Lakomec",2020);
    IS::createKnihu("Anna","Josef Heller",1940);
    IS::createKnihu("Kun","Hlava",1999);

    IS::odeberKnihu(2);
    IS::changeStatus("Bratrstvo",Status::Ztracena);
    IS::changeStatus("Hlava",Status::Pujcena);

    IS::pocetKnihOdRoku(1990);

    IS::printInfo();
    IS::statistika();
    return 0;
}
