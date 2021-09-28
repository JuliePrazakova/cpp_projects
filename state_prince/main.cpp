#include <iostream>
#include "Prisera.h"

int main() {
    Prisera* princ = new Prisera();
    princ->privitej();
    princ->polibek();
    princ->rozlucSe();


    delete princ;
    return 0;
}
