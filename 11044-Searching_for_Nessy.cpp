#include <iostream>
using namespace std;

int main(){
    int t;
    int n, m;
    cin >> t;
    
    while (t--){
        cin >> n >> m;
        
        cout << (n / 3) * (m / 3) << endl;
    }
    
    return 0;
}
// AC (1ms, 276KB)
// 別怕題目，先觀察要問什麼。