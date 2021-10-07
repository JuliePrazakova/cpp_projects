#include <iostream>
#include "Spravce.h"

int main() {
    Spravce* spravce = new Spravce();
    Investicni* ntb = new Investicni("u lipy23","laptop","2.12.2020",300000);
    Investicni* vec = new Investicni("doma 3","vec","listopad 2020",41000);
    Neinvesticni* ntb2 = new Neinvesticni("Vladan","laptop","listopad 2020",300);
    Neinvesticni* mys = new Neinvesticni("Erik","mys","1.1.2000",6000);

    spravce->pridejPredmet(ntb);
    spravce->pridejPredmet(vec);
    spravce->pridejPredmet(ntb2);
    spravce->pridejPredmet(mys);

   spravce->vypisPodlePopisu("laptop");

   delete ntb;
   delete ntb2;
   delete vec;
   delete mys;



    return 0;
}
