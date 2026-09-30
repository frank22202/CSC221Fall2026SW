#include "Student.h"
#include "Car.h"
#include <iostream>
#include <vector>
using namespace std;

class CarOwnership{
private:
    //attributes, properties, instance variables
    Student stuArr[1];
    Car carArr[1];
public:
    CarOwnership(const Student& student, const Car& car)
    : stuArr{student}, carArr{car} {} //stuArr = student

    const Student& getOwner() const{return stuArr[0];}
    const Car& getCar() const{return carArr[0];}
    
    void displayOwnership () const{
        cout << "==============================" << endl;
        cout << "Owner" << stuArr[0].getName() << " " << stuArr[0].getScore();
        carArr[0].printInfo();
        cout << "==============================" << endl;
    }
};

int main() {
    Car sportsCar("Ford", "Mustnag GT", 2026, 54321.32);
    Car dailyCar("Toyota", "Camry", 2025, 25463.25);
    Car familyCar("Honda", "Accord", 2024, 32165.24);

    Student stu1("John Smith", 89.56);
    Student stu2("Mary Jones", 95.26);

    CarOwnership rec1(stu1, sportsCar);
    CarOwnership rec2(stu1, dailyCar);
    CarOwnership rec3(stu2, familyCar);
    CarOwnership rec4(stu1, familyCar);

    std::vector<CarOwnership> ownershipList = {rec1, rec2, rec3, rec4};
    for(const CarOwnership& rec : ownershipList){
        rec.displayOwnership();
        cout << endl;
    }

}