#include <iostream>
#include <string>
using namespace std;

int main(){
    int TestCase;
    cin >> TestCase;
    
    while (TestCase--){
        cin.ignore();
        int pos[10005]; // 312
        string Num[10005]; // output
        
        int i = 0;
        while (cin >> pos[i]){
            ++i;
            if (cin.peek() == '\n'){
                break;
            }
        }
        
        string num;
        for (int j=0; j<i; ++j){
            cin >> num;
            Num[pos[j] - 1] = num;
        }
        
        for (int k=0; k<=i; ++k){
            cout << Num[k] << endl;
        }
    }
    
    return 0;
}