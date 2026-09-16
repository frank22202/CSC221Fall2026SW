#include <iostream>
#include <string>
using namespace std;

int function3(){
    return 123;
}

int function2(){
    cout << "from function2" << endl;
    int func3 = function3();
    cout << func3 << endl;
    return func3 * 2;
}

int function1(){
    cout << "from function1" << endl;
    int func2 = function2();
    cout << func2 << endl;
    return func2 * 2;
}

int main() {
    function1();
}