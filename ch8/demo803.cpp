#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    vector<string> cities = {"New York", "Chicago", "Miami", "Dallas"};
    vector<vector<int>> mileageMap = {
        {   0,  650, 1100, 1700}, // from NY to other cities
        { 650,    0, 1400, 1100}, // from Chicago to other cities
        {1100, 1400,    0, 1200}, // from Miami to other cities
        {1700, 1100, 1200,    0}
    };

    for(int i=0;i<cities.size();i++){
        cout << std::left << setw(12) << cities[i];
    }
    cout << endl;
    for(int row = 0;row < mileageMap.size();row++){
        for(int col = 0;col < mileageMap[row].size();col++){
            cout << std::left << setw(12) << mileageMap[row][col];
        }
        cout << endl;
    }
}