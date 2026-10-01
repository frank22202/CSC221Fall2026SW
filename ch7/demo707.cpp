#include <iostream>
#include <string>
using namespace std;

int main(){
    string message = "C++ are awesome!";
    message = "Python and " + message;
    // message ="";
    cout << message.size() << endl;
    cout << "Empty? " << (message.empty() ? "Yes" : "No") << endl;

    cout << message[3] << endl;
    cout << message.at(4) << endl;

    cout << message.front() << message.back() << endl;
    message.append(" Hello");
    
    string sub = message.substr(2, 6);
    cout << sub << endl;
    int pos =  message.find("C++");
    sub = message.substr(pos);
    cout << sub << endl;

    int num = 55;
    string str_num = to_string(num);
    int int_num = stoi("23");
    double dou_num = stod("34.33");
}