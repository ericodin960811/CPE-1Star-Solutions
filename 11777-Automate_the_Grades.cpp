#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    for (int i=1; i<=t; ++i){
        int total = 0;
        int grade;
        vector <int> tests;
        
        for (int j=0; j<7; ++j){
            cin >> grade;
            if (j < 4){
                total += grade;
            }else{
                tests.push_back(grade);
            }
        }
        sort(tests.begin(), tests.end());
        total += (tests[1] + tests[2]) / 2;
        cout << "Case " << i << ": ";
        
        if (total >= 90){
            cout << 'A' << endl;
        }else if (total >= 80){
            cout << 'B' << endl;
        }else if (total >= 70){
            cout << 'C' << endl;
        }else if (total >= 60){
            cout << 'D' << endl;
        }else{
            cout << 'F' << endl;
        }
    }
    
    return 0;
}
// Accepted	0.000