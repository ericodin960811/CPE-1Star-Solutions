#include <iostream>
using namespace std;

int main(){
    int t, n, m;
    cin >> t;
    
    while (t--){
        cin >> n >> m;
        
        if ((n - 1) % (m -1) == 0){
            cout << (n - 1) / (m -1) << endl;
        }else{
            cout << "cannot do this" << endl;
        }
    }
    
    return 0;
}
// AC (9ms, 296KB)