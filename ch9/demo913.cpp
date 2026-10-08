#include <iostream>
#include <queue>

using namespace std;
int main(){
    queue<string> names;
    names.push("Adam");
    names.push("Bill");
    names.push("Carol");
    names.push("David");
    names.push("Emily");

    cout << names.size() << endl;
    cout << names.front() << endl;
    cout << names.back() << endl;

    while(!names.empty()){
        cout << names.front() << " ";
        names.pop();
    }

    cout << endl;
    return 0;
}