#include "Student.h"
#include "Car.h"
#include <iostream>
#include <vector>
using namespace std;

class CarOwnership{
private:
    const Student* stuPtr;
    const Car* carPtr;
public:
    CarOwnership(const Student& student, const Car& car)
    : stuPtr(&student), carPtr(&car) {}

    const Student& getOwner() const{return *stuPtr;}
    const Car& getCar() const{return *carPtr;}

    void displayRec() const{
        cout << "=====(From Vector)===============" << endl;
        cout << "Owner" << stuPtr->getName() << " " << stuPtr->getScore();
        carPtr->printInfo();
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
    cout << ownershipList.size() << endl;
    for(const CarOwnership& rec : ownershipList){
        rec.displayRec();
        cout << endl;
    }
    return 0;
}