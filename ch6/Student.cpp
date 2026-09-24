#include "Student.h"
#include <iostream>
#include <stdexcept>

Student::Student(string n, double s) : name(n) {
    setScore(s);
}

string Student::getName() const { return name; }
double Student::getScore() const { return score; }

void Student::setScore(double s) {
    if (s < 0.0 || s > 100) {
        throw invalid_argument("Score is out of scope");        
    }
    score = s;
}

void Student::displayInfo() const {
    cout << "VA Student: " << name << " Score: " << score << endl;
}