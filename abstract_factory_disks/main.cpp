#include <iostream>
#include "TovarnaIntel.h"
#include "TovarnaAMD.h"

int main() {
    Tovarna* prvni = new TovarnaIntel();
    Tovarna* druha = new TovarnaAMD();

    prvni->createDisk();
    prvni->createProcesor();
    druha->createDisk();
    druha->createProcesor();


    delete prvni;
    delete druha;
    return 0;
}
