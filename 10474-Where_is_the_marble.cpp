#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, q;
    int counter = 1;
    
    while (cin >> n >> q && (n != 0 || q != 0)){
        vector <int> marbles;
        int m;
        
        cout << "CASE# " << counter << ':' << endl;
        
        while (n--){
            cin >> m;
            marbles.push_back(m);
        }
        sort(marbles.begin(), marbles.end());
        
        int n;
        while (q--){
            cin >> n;
            bool found = false;
            
            for (int i=0; i<marbles.size(); ++i){
                if (marbles[i] == n){
                    cout << n << " found at " << i + 1 << endl;
                    found = true;
                    break;
                }
            }
            if (!found){
                cout << n << " not found" << endl;
            }
        }
        counter++;
    }
    
    
    
    return 0;
}
// 	AC (1ms, 300KB)