#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    int hi, mi, totalm;
    int ho, mo;
    char gbg;
    
    while (t--){
        cin >> hi >> gbg >> mi;
        
        totalm = hi * 60 + mi;
        totalm = 720 - totalm;
        
        if (totalm < 0) totalm += 720; // *
        
        ho = totalm / 60;
        mo = totalm % 60;
        
        if (ho == 0){ // *
            cout << fixed << setfill('0') << "12:" << setw(2) << mo << endl;
        }else{
            cout << fixed << setfill('0') << setw(2) << ho << ':' << setw(2) << mo << endl;
        }
    }
    
    return 0;
}
// Accepted	0.000
// 記得用時間下手最簡單。邊緣狀況有點煩。
// 提示一下，小時表示的區間是該數字到下一個數字之前，所以會有12:05，第一個星號哪裡會出錯。