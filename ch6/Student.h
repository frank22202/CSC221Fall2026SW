#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;

class Student {
    private:
        string name;
        double score;
    public:
        Student(string n, double s);

        string getName() const;
        double getScore() const;

        void setScore(double s);

        void displayInfo() const;
};

#endif