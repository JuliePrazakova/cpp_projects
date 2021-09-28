#include <iostream>
#include "Ucetnictvi.h"
#include "Faktury.h"
#include "Objednavky.h"

int main() {
    Ucetnictvi* ucetni = new Ucetnictvi();
    Ucty* faktura = new Faktury("LA","2.22.2222","Jakub",9822,800);
    Ucty* objednavka = new Objednavky("NO","3.33.3333","Jakub","Pod Zamkem 1122",90);

    ucetni->pridejUcet(faktura);
    ucetni->pridejUcet(objednavka);

    ucetni->tiskniUctyOsoby("Jakub");

    std::cout<<"cena celkem: "<<ucetni->cenaCelkem();

    delete objednavka;
    delete faktura;
    delete ucetni;
    return 0;
}
