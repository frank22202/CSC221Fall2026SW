#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
private: //encapsulation
    //instance variables
    string make;
    string model;
    int year;
    double price;

public:
    // Constructor
    Car(string a, string b, int c, double d);

    // Accessors/Getters
    string getMake() const; //const for read only method
    string getModel() const;
    int getYear() const;
    double getPrice() const;

    // Mutators/Setters
    void setMake(string a);
    void setModel(string b);
    void setYear(int c);
    void setPrice(double d);

    // Display 
    void printInfo() const;    
};

#endif // CAR_H