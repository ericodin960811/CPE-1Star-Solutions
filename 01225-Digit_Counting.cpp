#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int TestCase;
    
    cin >> TestCase;
    int num;
    
    while (TestCase--){
        vector <int> timesVec(10, 0);
        string numString = "";
        
        cin >> num;
        
        for (int i=1; i<=num; ++i){
            numString += to_string(i);
        }
        
        for (char c : numString){
            timesVec[c - '0']++;
        }
        
        for (int i : timesVec){
            cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}
// 	AC (1ms, 404KB)