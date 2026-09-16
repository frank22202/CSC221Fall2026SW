#include <iostream>
#include <cmath>
using namespace std;
#ifndef M_PI
#define M_PI 3.14159
#endif

double cal_circle_area(double radius){
    return M_PI * pow(radius , 2);
}

double cal_rectangle_area(double width, double height){
    return width * height;
}

int main() {
    double radius{0.0};
    double width{0.0};
    double height{0.0};

    cout << "Enter radius: ";
    cin >> radius;

    cout << cal_circle_area(radius) << endl;    

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> height;

    cout << cal_rectangle_area(width, height) << endl;  
}
