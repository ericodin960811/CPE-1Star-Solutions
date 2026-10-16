#include <iostream>
using namespace std;

int main(){
    int n, m;
    
    while (cin >> n >> m){
        int counter = 0;
        
        counter += n -1;
        counter += n * (m - 1);
        
        cout << counter << endl;
    }
    
    return 0;
}
// AC (2ms, 280KB)