#include <iostream>
#include "RytirDirector.h"
#include "LehkoOddenecBuilder.h"
#include "TezkoOddenecBuilder.h"

int main() {
    RytirDirector* director = new RytirDirector();
    director->setRytirBuilder(new TezkoOddenecBuilder());
    auto artus = director->createRytir("Artus",120,"L",5,20);

    artus->printInfo();

    delete director;
    return 0;
}
