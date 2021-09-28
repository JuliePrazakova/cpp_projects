#include <iostream>
#include "EasyEnemyFactory.h"
#include "HardFactoryEnemy.h"


int main() {
    int rozhodnuti;

    std::cout << "Zvol si obtiznost: (1,2) ";
    std::cin >> rozhodnuti;

    EnemyFacetory* ef = nullptr;

    if (rozhodnuti == 1) {
        ef = new EasyEnemyFactory();
    } else {
        ef = new HardFactoryEnemy();
    }

    Mutant* mutak = ef->getMutant();
    Skeleton* kostak = ef->getSkeleton();

    std::cout << "Sila utoku: " << kostak->getAttack() << std::endl;

    delete mutak;
    delete kostak;
    return 0;
}
