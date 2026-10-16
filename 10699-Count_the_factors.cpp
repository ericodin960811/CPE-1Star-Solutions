#include <iostream>
using namespace std;

int main(){
    int n;

    while (cin >> n && n){
        int counter = 0;

        cout << n << " : ";

        for (int i = 2; i * i <= n; ++i){
            if (n % i == 0){
                counter++;
                while (n % i == 0){
                    n /= i;
                }
            }
        }
        if (n > 1) counter++;
        cout << counter << " " << endl;
    }

    return 0;
}
// AC (2ms, 3.5MB)