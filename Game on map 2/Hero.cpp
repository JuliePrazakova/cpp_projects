//
// Created by julpr on 25. 12. 2020.
//

#include "Hero.h"

void Hero::print() {
    std::cout<<"H";
}
Hero::Hero() {
    m_power = 100;
    m_type = "hero";
}
std::string Hero::getType() {
    return m_type;
}