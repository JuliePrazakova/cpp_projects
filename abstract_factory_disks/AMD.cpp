//
// Created by julpr on 3. 1. 2021.
//

#include "AMD.h"

int AMD::getVykon(){
    return m_frekvence+(10*m_cache);
}
AMD::AMD(int frekvence, int cache){
    m_frekvence = frekvence;
    m_cache = cache;
}