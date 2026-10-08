#include <iostream>
#include <list>

using namespace std;
int main(){
    list<int> numbers = {98, 23, 1, 33, 77};
    for(int num:numbers){
        cout << num << " ";
    }
    cout << endl;
    
    for(list<int>::iterator iter = numbers.begin(); iter != numbers.end();++iter){
        cout << *iter << " ";
    }
    cout << endl;
}