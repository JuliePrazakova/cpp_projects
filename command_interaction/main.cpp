#include <iostream>
#include "Osoba.h"
#include "Bojuj.h"
#include "Ukradni.h"

int main() {
    Osoba* patrik = new Osoba("Patrik", 10, 7);
    Osoba* kuba = new Osoba("Kuba", 7, 20);

    patrik->naucInterakce(new Bojuj());
    patrik->naucInterakce(new Ukradni());

    patrik->interaguj(kuba);



    delete patrik;
    delete kuba;
    return 0;
}
