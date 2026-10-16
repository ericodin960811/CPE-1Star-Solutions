#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    for (int c = 1; c <= t; ++c){
        cout << "Case #" << c << ":" << endl;
        string Web[10];
        int Relevance[10];
        int max_num = 0;

        for (int i = 0; i < 10; ++i){
            cin >> Web[i] >> Relevance[i];
            max_num = max(max_num, Relevance[i]);
        }

        for (int i = 0; i < 10; ++i){
            if (Relevance[i] == max_num){
                cout << Web[i] << endl;
            }
        }
    }

    return 0;
}