#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long y;
    vector <long long> table = {0, 1};
    
    for (int i=2; i<10000; ++i){
        table.push_back(table[i - 2] + table[i - 1] + 1);
    }
    
    while (cin >> y && y >= 0){
        if (y == 0){
            cout << "0 1" << endl;
        }else{
            cout << table[y] << ' ' << table[y + 1] << endl;
        }
    }
    
    return 0;
}
// AC (1ms, 496KB)
// 推演寫得好，AC 沒煩惱。不用模擬，只是數列的變形，前提是要看出來。