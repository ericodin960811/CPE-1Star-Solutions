#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;

    while (cin >> n){
        cout << setw(5) << n << " -> ";
        
        int num = 1;

        for (int i = 1; i <= n; ++i){
            num *= i;
            if (num % 10 == 0){
                num /= 10;
            }
            num %= 100000;
        }

        while (num % 10 == 0){
            num /= 10;
        }
        cout << num % 10 << endl;
    }

    return 0;
}