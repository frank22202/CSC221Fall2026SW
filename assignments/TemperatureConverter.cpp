//Name:Megan Dye
//Date: 9/03/26
//Course Section: CS Lab 0

#include <iostream>
using namespace std;

main()
{
    double fahrenheit;
    double celsius;
    cout << "Enter a temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << fahrenheit << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius." << endl;
    return 0;
} 