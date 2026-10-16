#include <iostream>
using namespace std;

int main() {
    int t, n, h;
    
    cin >> t;
    for (int i=1; i<=t; ++i){
        cin >> n;
        n -= 1;
        
        cin >> h;
        int last = h;
        int high = 0;
        int low = 0;
        
        while (n--){
            cin >> h;
            if (h > last){
                high += 1;
            }else if (h < last){
                low += 1;
            }
            last = h;
        }
        cout << "Case " << i << ": " << high << ' ' << low << endl;
    }
    
    return 0;
}