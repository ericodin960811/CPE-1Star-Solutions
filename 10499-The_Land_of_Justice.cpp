#include <iostream>
using namespace std;

int main(){
    long long n; // 測資大
    
    while (cin >> n && n > 0){
        if (n == 1){
            cout << "0%" << endl;
        }else{
            cout << n * 25 << '%' << endl;
        }
    }
    
    return 0;
}
// 	AC (6ms, 320KB)

// 球體的表面積是 4πr^2，這樣推公式就好。