#include <iostream>
#include <string>
using namespace std;

int main(){
    int TestCase;
    cin >> TestCase;
    cin.ignore();
    
    string ansTable;
    while (TestCase--){
        getline (cin, ansTable);
        int score = 0;
        int lastScore = 0;
        
        for (char c : ansTable){
            if (c == 'O'){
                lastScore++;
                score += lastScore;
            }else{
                lastScore = 0;
            }
        }
        cout << score << endl;
    }
    return 0;
}
// AC (1ms, 300KB)