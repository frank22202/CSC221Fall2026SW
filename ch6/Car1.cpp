// Simple Car template class with object creations
// 9/24/2026

#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    //instance variables
    string make{};
    string model{};
    int year{2026};

    //constructor
    Car() = default;
    Car(string x, string y, int z) : make(x), model(y), year(z){}
    Car(string x, string y) : make(x), model(y);
};


int main() {
    Car myCar1;
    Car myCar2;
    Car myCar3("Tesla", "X", 2028);
    myCar2.make = "Toyota";
    myCar2.model = "Camry";
    myCar2.year = 2027;

    cout << "myCar1" << myCar1.make << myCar1.model << myCar1.year << endl;
    cout << "myCar2" << myCar2.make << myCar2.model << myCar2.year << endl;
    cout << "myCar3" << myCar3.make << myCar3.model << myCar3.year << endl;
    return 0;
}
