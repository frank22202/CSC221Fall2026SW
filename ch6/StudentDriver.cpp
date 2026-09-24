#include "Student.h"
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    Student stu1("John", 87.56);
    Student stu2("Mary", 97.56);
    Student stu3("David", 73.56);
    stu1.displayInfo();
    stu2.displayInfo();
    stu3.displayInfo();

    return 0;
}