#include <iostream>
#include "Sklad.h"
int main() {
    Sklad* sklad01= new Sklad(5);
    Kontejner* K01 = new Kontejner("auta");
    Kontejner* K02 = new Kontejner("ipad");
    Kontejner* K03 = new Kontejner("pixel");
    Kontejner* K04 = new Kontejner("iphone");

    sklad01->ulozKontejner(K01, 0, 0);
    sklad01->ulozKontejner(K03, 0, 1);
    sklad01->ulozKontejner(K02, 0, 0);
    sklad01->ulozKontejner(K04, 10, 10);
sklad01->vypisObsahSkladu();

    delete K01;
    delete K02;
    delete K03;
    delete K04;
    delete sklad01;
    return 0;
}
