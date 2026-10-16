#include <iostream>
using namespace std;

int main(){
    unsigned int a, b;
    
    while (cin >> a >> b){
        cout << (a ^ b) << endl; // 因為電腦底層是二進制，所以用xor 就可以暴力解了，
    }                            // 不用開vector之類的。
    
    return 0;
}

// AC (5ms, 296KB)