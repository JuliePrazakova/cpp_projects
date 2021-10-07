//
// Created by julpr on 9. 11. 2020.
//

#include "Patro.h"

Patro::Patro(){
   /* for(Kontejner* pozice:m_pozice){
      //   pozice = nullptr; <-- tohle ti nenastaví nullptr vsude! for totiz pracuje pres kopirovani seznamu
    }
    for(int i = 0; i<m_pozice.size(); i++)
        m_pozice.at(i) = nullptr;       <- tohle jd etaky!
    */
    for(Kontejner* &pozice:m_pozice){ //ted uz se to nastaví! musí tam být &
        pozice = nullptr;
    }
}
void Patro::ulozKontejner(Kontejner* kontejner, int pozice){
    if(pozice>=0 && pozice<m_pozice.size()) {
        if(m_pozice.at(pozice) = nullptr){
            m_pozice.at(pozice) = kontejner;
        }else {
            std::cout<<"pozice "<<pozice<<" je obsazena"<<std::endl;
        }
    }else {
        std::cout<<"pozice mui byt v dobrem intervalo - Patro.cpp"<<std::endl;
    }


}
void Patro::odeberKontejner(int pozice){
    if(pozice>=0 && pozice<m_pozice.size()) {
        if(m_pozice.at(pozice) != nullptr){
            m_pozice.at(pozice) = nullptr;
        }else {
            std::cout<<"pozice "<<pozice<<" je volna"<<std::endl;
        }
    }else {
        std::cout<<"pozice mui byt v dobrem intervalo - Patro.cpp"<<std::endl;
    }
}
void Patro::vypisObsahPatra(){
    for(int i = 0; i<m_pozice.size();i++ ){ //ted uz se to nastaví! musí tam být &
       std::cout<< "Pozice: "<<i << ": ";
       m_pozice.at(i)->vypisObsah();
       std::cout<<std::endl;
    }
}