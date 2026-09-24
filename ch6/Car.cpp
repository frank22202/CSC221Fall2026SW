#include "Car.h"
#include <iostream>
using namespace std;

// Constructor Implementation
// :: - Scope Resolution Operator
Car::Car(string a, string b, int c, double d) :
    make(a), model(b), year(c), price(d) {}

// Getters
string Car::getMake() const { return make; }
string Car::getModel() const { return model; }
int Car::getYear() const { return year; }
double Car::getPrice() const { return price; }

// Mutators
void Car::setMake(string a) { make = a; }
void Car::setModel(string b) { model = b; }
void Car::setYear(int c) { year = c; }
void Car::setPrice(double d) { price = d; }

void Car::printInfo() const {
    cout << make << " " << model << " " << year << " " << price << endl;
} 