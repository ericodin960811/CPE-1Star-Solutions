#include <iostream>
#include <vector> // map 不能 sort
#include <algorithm>
using namespace std;

int main(){
    string stop;
    int Register, num, task;
    vector <vector <int>> origPair;
    vector <vector <int>> totalPair;
 
    while (cin >> stop && stop != "#"){
        cin >> Register >> num;
        vector <int> temp;
        temp.push_back(Register);
        temp.push_back(num);
        origPair.push_back(temp);
    }

    cin >> task;

    for (size_t i=0; i<origPair.size(); ++i){
        for (int j=1; j<=task; ++j){
            vector <int> temp;
            temp.push_back(origPair[i][1] * j);
            temp.push_back(origPair[i][0]);
            totalPair.push_back(temp);
        }
    }

    sort(totalPair.begin(), totalPair.end());

    for (int i=0; i<task; ++i){
        cout << totalPair[i][1] << '\n';
    }

    return 0;
}

// uva AC (2.280s)