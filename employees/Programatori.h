//
// Created by julpr on 30. 11. 2020.
//

#ifndef ZAMESTNANCI_CVICENI_PROGRAMATORI_H
#define ZAMESTNANCI_CVICENI_PROGRAMATORI_H

#include "PracovniPozice.h"
class Programatori: protected PracovniPozice {
    int m_zakladPlatu;
public:
    Programatori(int zakladPlatu, int roky);
    int vratPlat();
};


#endif //ZAMESTNANCI_CVICENI_PROGRAMATORI_H
