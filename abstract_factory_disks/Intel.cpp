//
// Created by julpr on 3. 1. 2021.
//

#include "Intel.h"

Intel::Intel(int frekvence){
    m_frekvence = frekvence;
}
int Intel::getVykon(){
   return m_frekvence*3;
}