#include <iostream>
#include "coin.h"

int main() {
    Coin penny;
    std::cout << "Mat ban dau huong len " << penny.getSideUp() << std::endl;
    
    int headsCount = 0;
    int tailsCount = 0;
    
    for (int i = 1; i <= 20; i++) {
        penny.toss();
        std::cout << "quang " << i << ": " << penny.getSideUp() << std::endl;
        if (penny.getSideUp() == "dau")
            headsCount++;
        else
            tailsCount++;
    }
    
    std::cout << "Dem dau: " << headsCount << std::endl;
    std::cout << "Dem cuoi: " << tailsCount << std::endl;
    
    return 0;
}
