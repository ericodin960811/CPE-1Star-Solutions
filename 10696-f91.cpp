#include <iostream>
using namespace std;

int f91(int num){
    if (num <= 100){
        return f91(f91(num + 11));
    }else{
        return num - 10;
    }
    
    return 0;
}

int main(){
    int n;
    
    while (cin >> n && n != 0){
        cout << "f91(" << n << ") = " << f91(n) << endl;
    }
    
    return 0;
}
// AC (1ms, 316KB)