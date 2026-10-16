#include <iostream>
using namespace std;

int cal(int n, int sum){
    if (n > 0){
        sum += n * n;
        n--;
        return cal(n, sum);
    }
    return sum;
}

int main(){
    int n;

    while (cin >> n && n){
        cout << cal(n, 0) << endl;
    }

    return 0;
}