#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <iomanip>
using namespace std;

int processed(int n){
    int m = 0.0;
    
    while (n > 0){
        m += n % 10;
        n /= 10;
    }
    if (m > 9){
        return processed(m);
    }
    return m;
}

int main(){
    string a, b;
    
    while (getline(cin, a)){
        getline(cin, b);
        
        int n = 0; int m = 0;
        
        for (char c : a){
            if (isalpha(c)){
                n += tolower(c) - 'a' + 1;
            }
        }
        for (char c : b){
            if (isalpha(c)){
                m += tolower(c) - 'a' + 1;
            }
        }
        double x = processed(n) * 1.0; // 神之一手
        double y = processed(m) * 1.0;
        double ans = min(x, y) / max(x, y) * 100;
        cout << fixed << setprecision(2) << ans << " %" << endl;
    }
    
    return 0;
}
// Accepted	0.000