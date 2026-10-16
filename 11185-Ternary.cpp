#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    
    while (cin >> n && n >= 0){
        string ternary = "";
        if (n < 3){
            cout << n << endl;
        }else{
            while (n > 0){
                ternary += to_string(n % 3);
                n /= 3;
            }
            string revTer = "";
            
            for (int i=ternary.size()-1; i>=0; --i){
                revTer += ternary[i];
            }
            
            cout << revTer << endl;
        }
    }
    
    return 0;
}
// AC (4ms, 324KB)