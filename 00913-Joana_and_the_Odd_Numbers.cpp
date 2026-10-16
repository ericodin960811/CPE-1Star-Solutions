#include <iostream>
using namespace std;

int main(){
    long long amountl;
    
    while (cin >> amountl){
        long long index = ((amountl + 1) / 2) * ((amountl + 1) / 2); // pow
        long long FinalNum = 2 * index - 1;
        long long sum = FinalNum * 3 - 6;
        cout << sum << endl;
    }
    return 0;
}
// AC (1ms, 332KB)