#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

void modifyPassByValue(vector<vector<int>> mapCp){
    mapCp[0][1] = 9999;
    mapCp[1][0] = 9999;
    cout << "Pass by value: " << mapCp[0][1] << endl;
}

void modifyPassByReference(vector<vector<int>>& mapCp){
    mapCp[0][1] = 9999;
    mapCp[1][0] = 9999;
    cout << "Pass by Reference: " << mapCp[0][1] << endl;
}

int main(){
    vector<vector<int>> mileageMap = {
        {   0,  650, 1100, 1700}, // from NY to other cities
        { 650,    0, 1400, 1100}, // from Chicago to other cities
        {1100, 1400,    0, 1200}, // from Miami to other cities
        {1700, 1100, 1200,    0}
    };
    cout << "Original value: " << mileageMap[0][1] << endl;
    modifyPassByValue(mileageMap);
    cout << "After function call: " << mileageMap[0][1] << endl;
    modifyPassByReference(mileageMap);
    cout << "After function call(ref): " << mileageMap[0][1] << endl;
}