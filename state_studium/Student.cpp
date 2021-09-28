//
// Created by julpr on 3. 1. 2021.
//

#include "Student.h"

Student::Student(bool prezencni, float prumer, float semestr){
    m_prumer = prumer;
    m_pocetSemestru = semestr;
    if(prezencni == true){
        m_studium = new Prezencni();
    }else {
        m_studium = new Dalkove();
    }
}
void Student::getPocetLetZdarma(){
    std::cout<<"zbyvajici pocet semestru zdarma: "<<m_studium->getZbyvajiciRokyZdarma(m_pocetSemestru)<<std::endl;
}
void Student::getStipendium(){
     std::cout<<"stipendium pro studenta: "<<m_studium->getStipendium(m_prumer)<<std::endl;
}
int Student::getPocetSemestru(){
    return m_pocetSemestru;
}
void Student::setPocetSemestru(int pocetS){
    m_pocetSemestru = pocetS;
}
void Student::prejdiNaDalkove(){
    m_studium = new Dalkove();
}
void Student::prejdiNaPrezencni(){
    m_studium = new Prezencni();
}
void Student::setPrumer(float prumer){
    m_prumer = prumer;
}