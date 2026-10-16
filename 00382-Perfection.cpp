#include <iostream>
#include <iomanip>
using namespace std;

int addFactor(int n){
    int add = 0;

    for (int i=1; i<=n/2; ++i){
        if (n % i == 0){
            add += i;
        }
    }
    return add;
}

int main(){
    int n;
    
    cout << "PERFECTION OUTPUT" << '\n';

    while (cin >> n && n){
        cout << setw(5) << n << "  ";
        if (addFactor(n) == n){
            cout << "PERFECT" << '\n';
        }else if (addFactor(n) < n){
            cout << "DEFICIENT" << '\n';
        }else{
            cout << "ABUNDANT" << '\n';
        }
    }

    cout << "END OF OUTPUT" << '\n';

    return 0;
}

// AC (2ms, 324KB)