#include <iostream>
using namespace std;

int main(){
    int o, f, s, t;
    
    while (cin >> o >> f >> s >> t && !(o == 0 && f == 0 && s == 0 && t == 0)){
        int deg = 1080;
        
        if (o >= f){
            deg += (o - f) * 9;
        }else{
            deg += (o + (40 - f)) * 9;
        }
        
        if (s >= f){
            deg += (s - f) * 9;
        }else{
            deg += (s + (40 - f)) * 9;
        }
        
        if (s >= t){
            deg += (s - t) * 9;
        }else{
            deg += (s + (40 - t)) * 9;
        }
        
        
        cout << deg << endl;
    }
    
    return 0;
}
// 	AC (1ms, 304KB)
// 有更快的方法，但是我懶得想，上面是會判斷順逆時針，下面則會自己判斷：
// deg += (f - o + 40) % 40 * 9; 
// deg += (f - s + 40) % 40 * 9;
// deg += (t - s + 40) % 40 * 9;