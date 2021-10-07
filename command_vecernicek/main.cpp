#include <iostream>
#include "Vecernicek.h"
#include "Formalni.h"
#include "Neformalni.h"

int main() {
    Vecernicek* vecernicek = new Vecernicek();
    vecernicek->naucPozdrav(new Formalni());
    vecernicek->privitej();
    vecernicek->naucPozdrav(new Neformalni());
    vecernicek->rozlucSe();

    delete vecernicek;
    return 0;
}
