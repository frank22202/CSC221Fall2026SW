#include <iostream>
#include <string>
using namespace std;

int main(){
    int highwayNumber{0};
    std::string direction, type;
    cout << "Enter highway number:" << endl;    
    cin >> highwayNumber;

    if(highwayNumber % 100 == 0){
        cout << "I-" << highwayNumber << " is not a valid interstate highway number." << endl;
        return 1;
    }

    if(highwayNumber >= 1 && highwayNumber <= 99){
        type = "primary";
    }else if(highwayNumber >= 100 && highwayNumber <= 999){
        type = "auxiliary";
    }else{
        cout << "I-" << highwayNumber << " is not a valid interstate highway number." << endl;
        return 1;
    }
    int highwayDirection = highwayNumber % 2;
    
    if(highwayDirection == 0){
        direction = " east/west";
    }else{
        direction = " north/south";
    }
    int highwayserved = highwayNumber % 100;
    cout << "I-" << highwayNumber << " is " <<type <<" serves I-" << highwayserved << "." << 
    direction << endl;

      
}