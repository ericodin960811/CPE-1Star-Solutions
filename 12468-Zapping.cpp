#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b && (a != -1 || b != -1)) {

        int d = abs(a - b);

        if (d > 50) {
            cout << 100 - d << endl;
        } else {
            cout << d << endl;
        }
    }
    
    return 0;
}
// Accepted	0.000