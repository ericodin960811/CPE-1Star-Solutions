#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int s, p, y, j;
    
    while (cin >> s >> p >> y >> j) {
        int ya = 0;
        int pa = p;
        int sa = max(y, s + p);

        int remaining = 12 + j - (sa + pa + ya);

        while (remaining > 0) {
            if (sa - pa < s + 1 && sa - ya < y + 1){
                sa++;
            }else if (pa - ya < p + 1){
                pa++;
            }else{
                ya++;
            }
            remaining--;
        }
        
        cout << sa << " " << pa << " " << ya << endl;
    }
    
    return 0;
}
// Accepted	0.000
// 很煩，要先從合理的最小算起，多的再合理分配給全部。
