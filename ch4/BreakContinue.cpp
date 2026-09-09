#include <iostream>

using namespace std;

int main(){
    for(int n = 0; n < 10; n++){        
        if(n == 3){
            continue;
            //break;
        }
        cout << n << endl;
    }
    cout << "Goodbye!\n";
    return 0;
}
