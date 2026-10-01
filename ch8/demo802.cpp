#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    const int NUM_CITIES = 4;
    string cities[NUM_CITIES] = {"New York", "Chicago", "Miami", "Dallas"};
    int mileageMap[NUM_CITIES][NUM_CITIES] = {
        {   0,  650, 1100, 1700}, // from NY to other cities
        { 650,    0, 1400, 1100}, // from Chicago to other cities
        {1100, 1400,    0, 1200}, // from Miami to other cities
        {1700, 1100, 1200,    0}
    };

    for(int i=0;i<NUM_CITIES;i++){
        cout << std::left << setw(12) << cities[i];
    }
    cout << endl;
    for(int row = 0;row < NUM_CITIES;row++){
        for(int col = 0;col < NUM_CITIES;col++){
            cout << std::left << setw(12) << mileageMap[row][col];
        }
        cout << endl;
    }
}