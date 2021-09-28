#include <iostream>
#include "MestoDirector.h"
#include "AlchymistickeMestoBuilder.h"
#include "DulniMestoBuilder.h"
#include "ObchodniMestoBuilder.h"


int main() {
    MestoDirector* director = new MestoDirector(new DulniMestoBuilder());
    director->createMesto("Brno",2000);
    director->printInfo();

    director->setBuilder(new ObchodniMestoBuilder());
    director->createMesto("Praha",70000);

    director->printInfo();

    return 0;
}
