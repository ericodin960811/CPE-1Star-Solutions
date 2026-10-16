#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        bitset <32> bin(n); // index是右到左。
        int counter = 0;
        int ia = 0;
        int ib = 0;

        for (int i = 0; i < 32; ++i) {
            if (bin[i] == 1) {
                counter++;
                if (counter % 2 == 1) {
                    ia += pow(2, i) + 1e-9;
                    // ia += (1 << i); 
                } else {
                    ib += pow(2, i) + 1e-9;
                    // ib += (1 << i);
                }
            }
        }
        cout << ia << " " << ib << endl;
    }
    return 0;
}
// Accepted	0.000