#include <iostream>
using namespace std;

int main(){
    long long D;
    
    while (cin >> D && D != 0){
        long long M = D / 9;
        
        if (D % 9 == 0){ // d == 0
            cout << D + M - 1 << ' ' << D + M << endl;
        }else{
            cout << D + M << endl;
        }
    }
    
    return 0;
}
//	AC (1ms, 292KB)