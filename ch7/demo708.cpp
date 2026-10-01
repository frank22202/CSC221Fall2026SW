#include <iostream>
#include <string>
using namespace std;

int main(){
    string make[] = {"Honda", "Toyota", "Tesla"};
    string model[] = {"Accord", "Camery", "Model Y"};
    double price[] = {25632.22, 33236.11, 55546.88};

    for (int i=0;i<size(make);i++){
        cout << make[i] << " " << model[i] << " " << price[i] << endl;
    }
}