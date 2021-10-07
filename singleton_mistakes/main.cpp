#include <iostream>
#include "Hrdina.h"

int main() {
    Hrdina* karel = Hrdina::createHrdina("", Povolani::Rytir);


    SpravceChyb::getSpravceChyb()->print();
    karel->print();

    delete karel;
    return 0;
}
