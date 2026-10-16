#include <iostream>
using namespace std;

int main(){
    int t;
    int n, m;
    
    cin >> t;
    
    while (t--){
        cin >> n >> m;
        
        if (n > m){
            cout << '>' << endl;
        }else if (n < m){
            cout << '<' << endl;
        }else{
            cout << '=' << endl;
        }
    }
    
    
    return 0;
}
// AC (1ms, 316KB)