#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    string ing;
    
    cin >> t;
    while (t--){
        int m = 0;
        int a = 0;
        int r = 0;
        int g = 0;
        int i = 0;
        int t = 0;

        cin >> ing;
        
        for (char c : ing){
            if (c == 'M'){
                m++;
            }else if (c == 'A'){
                a++;
            }else if (c == 'R'){
                r++;
            }else if (c == 'G'){
                g++;
            }else if (c == 'I'){
                i++;
            }else if (c == 'T'){
                t++;
            }
        }
        
        a /= 3;
        r /= 2;

        int pizza = min({m, a, r, g, i, t});

        cout << pizza << endl;
    }
    
    return 0;
}
// ?