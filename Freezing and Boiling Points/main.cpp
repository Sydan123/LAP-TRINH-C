#include <iostream>
#include "FaBP.h"

using namespace std;

int main(){
    double temp;
    cout << "Nhập nhiệt độ: ";
    cin >> temp;

    FaBP f(temp);

    if(f.isEthylFreezing()){
        cout << "Rượu etylic sẽ đông đặc ở " << f.getTemperature() << endl;
    }

    if(f.isEthylBoiling()){
        cout << "Rượu etylic sẽ sôi ở " << f.getTemperature() << endl;
    }

    if(f.isOxygenFreezing()){
        cout << "Oxy sẽ đóng băng ở " << f.getTemperature() << endl;
    }

    if(f.isOxygenBoiling()){
        cout << "Oxy sẽ sôi ở " << f.getTemperature() << endl;
    }

    if(f.isWaterFreezing()){
        cout << "Nước sẽ đóng băng ở " << f.getTemperature() << endl;
    }

    if(f.isWaterBoiling()){
        cout << "Nước sẽ sôi ở " << f.getTemperature() << endl;
    }

    return 0;
}
