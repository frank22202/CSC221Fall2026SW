#include <iostream> //Required for cout
#include "../ch6/Student.h"

using namespace std;
int main()
{
    int size = 5;
    int* dynamicArray = new int[size];
    dynamicArray[0] = 12;
    dynamicArray[1] = 23;
    cout << dynamicArray[0] << endl;
    delete[] dynamicArray;

    Student* stu1  = new Student("John", 98);
    Student* stu2  = new Student("Mary", 81);

    stu1->displayInfo();
    stu2->displayInfo();

    delete stu1;
    delete stu2;

    return 0;
}