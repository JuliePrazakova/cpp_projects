//
// Created by julpr on 3. 1. 2021.
//

#include "SSD.h"

SSD::SSD(int rychlost, int hloubka){
    m_rychlostZapisu = rychlost;
    m_hloubkaZapisu = hloubka;
}
int SSD::getRychlost(){
    return int(m_rychlostZapisu+(m_rychlostZapisu/m_hloubkaZapisu));
};