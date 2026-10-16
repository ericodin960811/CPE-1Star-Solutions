#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    int n;
    
    while (cin >> t && t != 0){
        vector <int> wines;
        
        cin >> n;
        wines.push_back(n);
        
        for (int i=1; i<t-1; ++i){
            cin >> n;
            wines.push_back(wines[i - 1] + n);
        }
        cin >> n;
        
        int counter = 0;
        for (int i=0; i<t-1; ++i){
            counter += abs(wines[i]);
        }
        cout << counter << endl;
    }
    return 0;
}
// AC (22ms, 1.3MB)