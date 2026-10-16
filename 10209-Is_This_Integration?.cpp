#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a, x, y4, z4;
    double pi = acos(-1.0);
    
    while (cin >> a){
        x = (6 - 6*sqrt(3) + 2*pi) * a*a / 6;
        y4 = (a*a*pi/2 - a*a - x) * 2;
        z4 = a*a - x - y4;
        
        cout << fixed << setprecision(3) << x << ' ' << y4 << ' ' << z4<< endl;
    }
    
    return 0;
}
// 	Accepted 0.030
// 推公式比較難，推出中間的x就可以解了。最大的提示是，兩個底邊為半徑的弧交一點，那點連線
// 到左右兩個底邊的點就是60-60-60 正三角形，藉此算出小弧邊，剩下旁邊就是30度三角形。