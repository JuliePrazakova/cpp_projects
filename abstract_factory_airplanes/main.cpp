#include <iostream>
#include "Letiste.h"

int main() {
    Letiste* VH = new Letiste("VaclavaHavla",250);
    Letadlo* airbus = new DopravniLetadlo(400,"airbus775",1000);
    Letadlo* boing = new NakladniLetadlo(1200,"boing",1200);

    VH->pridejLetadlo(airbus);
    VH->pridejLetadlo(boing);

    VH->printInfo();




    delete airbus;
    delete boing;
    delete VH;
    return 0;
}
