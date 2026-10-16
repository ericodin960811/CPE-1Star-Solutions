#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t, n, x;
    cin >> t;
    
    while (t--){
        int Min = 2100000000;
        int Max = -1;
        cin >> n;
        
        while (n--){
            cin >> x;
            Min = min(x, Min);
            Max = max(x, Max);
        }

        cout << (Max - Min) * 2 << endl;
    }
    
    return 0;
}
// AC (1ms, 304KB)