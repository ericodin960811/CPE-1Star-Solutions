#include <iostream>
using namespace std;

int main(){
    int t;
    int n;
    
    while (cin >> t){
        for (int i=1; i<=t; ++i){
            cin >> n;
            int num = n;
            int sum;
            
            do {
                sum = 0;
                while (n > 0){
                    sum += (n % 10) * (n % 10);
                    n /= 10;
                }
                n = sum;
            } while (n != 4 && n != 1);
            
            if (n == 1){
                cout << "Case #" << i << ": " << num <<" is a Happy number." << endl;
            }else{
                cout << "Case #" << i << ": " << num <<" is an Unhappy number." << endl;
            }
        }
    }
    
    
    return 0;
}
// AC (23ms, 292KB)