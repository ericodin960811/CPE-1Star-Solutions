#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    
    while (getline(cin, s)){
        int MaxSum = 0;
        int conSum = 0;
        int n;
        
        stringstream ss(s);
        while (ss >> n){
            conSum += n;
            
            if (conSum > MaxSum){
                MaxSum = conSum;
            }
            if (conSum < 0){
                conSum = 0;
            }
        }
        cout << MaxSum << endl;
    }
    
    return 0;
}
// 遇到負數還是可以繼續加，除非加起來變成負的，代表最後一個數字小於零，也不會是下一個最大
// 和的開始。