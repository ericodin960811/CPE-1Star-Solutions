#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    int a, b, c, d;
    
    while (t--){
        vector <int> Vec;
        cin >> a >> b >> c >> d;
        Vec.push_back(a);
        Vec.push_back(b);
        Vec.push_back(c);
        Vec.push_back(d);
        
        sort(Vec.begin(), Vec.end());
        
        if (Vec[0] == Vec[1] && Vec[2] == Vec[3]){
            if (Vec[1] == Vec[2]){
                cout << "square" << endl;
            }else{
                cout << "rectangle" << endl;
            }
        }else if (Vec[0] + Vec[1] + Vec[2] <= Vec[3]){
            cout << "banana" << endl;
        }else{
            cout << "quadrangle" << endl;
        }
    }
    
    return 0;
}
// AC (1ms, 296KB)