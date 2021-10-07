//
// Created by julpr on 30. 11. 2020.
//

#ifndef ZAMESTNANCI_CVICENI_MANAZERI_H
#define ZAMESTNANCI_CVICENI_MANAZERI_H

#include "PracovniPozice.h"
class Manazeri: protected PracovniPozice {
int m_zakladPlatu;
public:
Manazeri(int zakladPlatu, int roky);
int vratPlat();
};


#endif //ZAMESTNANCI_CVICENI_MANAZERI_H
