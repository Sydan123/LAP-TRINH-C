#include "coin.h"
#include <cstdlib>      
#include <ctime>        

Coin::Coin() {
    srand(time(0));        
    int randomValue = rand() % 2;
    
    if (randomValue == 0)
        sideUp = "dau";
    else
        sideUp = "duoi";
}

void Coin::toss() {
    int randomValue = rand() % 2;
    if (randomValue == 0)
        sideUp = "dau";
    else
        sideUp = "duoi";
}

std::string Coin::getSideUp() const {
    return sideUp;
}

