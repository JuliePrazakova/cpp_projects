//
// Created by julpr on 2. 1. 2021.
//

#include "IS.h"

std::vector<Kniha*> IS::s_knihy = {};

void IS::createKnihu(std::string autor, std::string nazev, int rokVydani){
    Kniha* kniha = new Kniha(autor,nazev,rokVydani);
    s_knihy.push_back(kniha);
}

void IS::odeberKnihu(int ID){
    for(int i = 0; i<s_knihy.size();i++){ //to samé jen pomocí normálního Int I
        Kniha* book = s_knihy.at(i);
        if(book->getID() == ID){
            delete book; //vyaze jen obsah chlivku
            s_knihy.erase(s_knihy.begin() + i); //vymaze i cely CHLÍÉVIK
            break;
        }
    }

}
void IS::printInfo(){
    for(auto kniha:s_knihy){
        kniha->printInfo();
        std::cout<<std::endl;
    }
}
void IS::changeStatus(std::string nazev, Status status){
    for(auto kniha:s_knihy){
        if(kniha->getNazev() == nazev){
            kniha->setStatus(status);
        }
    }
}

int IS::pocetKnihOdRoku(int rok){
    int pocet = 0;
    for(auto kniha:s_knihy){
        if(kniha->getRokVydani() > rok){
            pocet++;
        }
    }
    return pocet;
}

std::vector<Kniha*> IS::getKnihyPodleStatusu(Status status){
    std::vector<Kniha*> vektorKnih= {};
    for(auto kniha:s_knihy){
        if(kniha->getStatus() == status){
            vektorKnih.push_back(kniha);
        }
    }
    return vektorKnih;
}

void IS::statistika() {
    std::cout<<"=== statistika ==="<<std::endl;
    std::cout<<"celkem knih: "<<getKnihyPodleStatusu(Status::Dostupna).size()+getKnihyPodleStatusu(Status::Pujcena).size()+getKnihyPodleStatusu(Status::Ztracena).size()<<std::endl;
    std::cout<<"pocet knih dostupnych: "<<getKnihyPodleStatusu(Status::Dostupna).size()<<std::endl;
    std::cout<<"pocet knih pujcenych: "<<getKnihyPodleStatusu(Status::Pujcena).size()<<std::endl;
    std::cout<<"pocet knih ztracenych: "<<getKnihyPodleStatusu(Status::Ztracena).size()<<std::endl;
}