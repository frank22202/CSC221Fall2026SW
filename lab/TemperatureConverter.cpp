#include<iostream> // Required for cout
using namespace std;

int main()
{
    double fahrenheit{0.0}, celsius{0.0};
    cout << "Enter a temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << fahrenheit << " equivalent to " << celsius << endl;

    return 0;
}
