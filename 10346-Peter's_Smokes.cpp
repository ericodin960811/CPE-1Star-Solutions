#include <iostream>
using namespace std;

int main(){
    int n, k;
    
    while (cin >> n >> k){
        int sum = 0;
        int lilcgrt = 0;
        
        while (n > 0){
            lilcgrt += n;
            sum += n;
            n -= n;
            
            if (lilcgrt >= k){
                n += lilcgrt / k;
                lilcgrt = lilcgrt % k;
            }
        }
        
        cout << sum << endl;
    }
    
    return 0;
}
// 	AC (1ms, 288KB)
// 有公式解 n + (n - 1) / (k - 1)，n-1 代表煙蒂最後會剩下一以上的數量，所以先拿掉
//（就像如果最後剛好抽一根，會留下一根孤單的菸蒂）；k-1 代表抽一根會還回一個菸蒂，乾脆直接拿掉。


// #include <iostream>
// using namespace std;

// int main(){
//     int n, k;
    
//     while (cin >> n >> k){
//         cout << n + (n - 1) / (k - 1) << endl;
//     }
    
//     return 0;
// }