#include <iostream>
#include "Lod.h"


int main() {
    Lod* lod = new Lod();
    lod->ulozAkci(new VypisNaklad);
    lod->ulozAkci(new PridejNaklad);
    lod->provedAkci();


    delete lod;
    return 0;
}
