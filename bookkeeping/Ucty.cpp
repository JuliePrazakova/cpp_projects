//
// Created by julpr on 4. 1. 2021.
//

#include "Ucty.h"

Ucty::Ucty(std::string firma, std::string datum, std::string osoba, int uhrada){
    m_firma = firma;
    m_datum = datum;
    m_kUhrade = uhrada;
    m_osoba = osoba;
}

std::string Ucty::getOsobu() {
    return m_osoba;
}
int Ucty::getUhrada() {
    return m_kUhrade;
}