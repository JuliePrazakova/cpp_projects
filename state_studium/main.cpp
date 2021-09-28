#include <iostream>
#include "Student.h"


int main() {
    Student* pepa = new Student(true, 2.0,4);
    pepa->getStipendium();
    pepa->getPocetLetZdarma();

    pepa->prejdiNaDalkove();
    pepa->getStipendium();

    delete pepa;
    return 0;
}
