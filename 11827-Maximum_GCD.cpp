#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    
    string line;
    int Max;
    int num;
    while (t--){
        getline(cin, line);
        stringstream ss(line);
        vector <int> Nums;
        Max = 1;
        
        while (ss >> num){
            Nums.push_back(num);
        }
        
        for (int i=0; i<Nums.size(); ++i){
            for (int j=0; j<Nums.size(); ++j){
                if (i != j){
                    Max = max(gcd(Nums[i], Nums[j]), Max);
                }
            }
        }
        cout << Max << endl;
    }
    
    return 0;
}