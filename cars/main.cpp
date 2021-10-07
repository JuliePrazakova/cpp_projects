#include <iostream>
#include "Autobazar.h"
#include "Osobni.h"
#include "Nakladni.h"

int main() {
    Autobazar* aaa = new Autobazar();
   aaa->pridejAutomobil(new Osobni(2,200,200000,"A6"));
   aaa->pridejAutomobil(new Nakladni(1,60000,90000,"efta"));
   aaa->pridejAutomobil(new Osobni(0,5000,350000,"ix20"));

   Automobil* opel = new Osobni(2,2,2,"zafira");
   opel->
   aaa->vypisAuta();

    return 0;
}
