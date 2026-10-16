#include <iostream>
using namespace std;

int main() {
    int n;
    int counter = 1;

    while (cin >> n && n > 0){
        int times = 0;
        int t = 1;
        
        while (t < n){
            times += 1;
            t *= 2;
        }
        cout << "Case " << counter << ": " << times << endl;
        counter++;
    }
    
    return 0;
}