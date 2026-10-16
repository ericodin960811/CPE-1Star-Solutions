#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    double l, w;
    double Max, Min;
    
    while (cin >> l >> w){
        Max = (4.0*(l+w) - sqrt((16.0*l*l + 32.0*w*l + 16.0*w*w) - 48.0*l*w)) / 24.0;
        Min = min(l, w) / 2.0;
        cout << fixed << setprecision(3) << Max+1e-9 << " 0.000 " << Min+1e-9 << endl;
    } // 1e+9 控制精準度，才可以ac
    return 0;
}
// Accepted	0.010