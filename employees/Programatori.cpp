//
// Created by julpr on 30. 11. 2020.
//

#include "Programatori.h"

Programatori::Programatori(int zakladPlatu, int roky) {
    m_zakladPlatu = zakladPlatu;
    m_pozice = "programator";
    m_pocetLetNaPozici = roky;
}
int Programatori::vratPlat() {
    return m_zakladPlatu+m_pocetLetNaPozici*10;
}