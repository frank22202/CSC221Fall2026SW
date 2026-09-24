#include "Car.h"
#include <iostream>
using namespace std;

int main() {
    Car myCar1("Honda", "Accord", 2012, 15236.25);
    Car myCar2("Tesla", "Y", 2022, 35836.25);

    cout << myCar1.getMake() << " " << myCar1.getModel() << endl;
    cout << myCar2.getMake() << " " << myCar2.getModel() << endl;

    return 0;
}