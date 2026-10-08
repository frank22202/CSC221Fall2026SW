#include <iostream>
#include <vector>

using namespace std;
int main(){
    int size = 5;
    vector<int> scores(size);
    // vector<int> scores;
    cout << scores.size() << endl;

    for(int i = 0;i<10;i++){
        scores.push_back(i + 1);
    }

    scores.insert(scores.begin() + 2, 9999);
    scores[3] = 8888;
    scores.at(4) = 7777;
    scores.pop_back();
    scores.erase(scores.begin() + 1);
    scores.clear();
    for(int s: scores){
        cout << s << " ";
    }
    cout << scores.size() << endl;

}