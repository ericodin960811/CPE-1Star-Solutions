#include <iostream>
using namespace std;

int WhichLayer(int n, long long &first){
    long long layer = 0;
    long long counter = 0;

    while (n > counter){
        layer++;
        counter += layer;
    }

    counter -= layer;
    n -= counter;
    first = n;

    return layer;
}

int main(){
    long long n;
    long long first;

    while (cin >> n){
        cout << "TERM " << n << " IS ";
        if (WhichLayer(n, first) % 2 == 0){
            cout << first << '/' << WhichLayer(n, first) - first + 1 << '\n';
        }else{
            cout << WhichLayer(n, first) - first + 1 << '/' << first << '\n';
        }
    }

    return 0;
}
//	AC (3ms, 296KB)