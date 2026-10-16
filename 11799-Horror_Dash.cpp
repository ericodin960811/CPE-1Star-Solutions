#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t, n, speed;
    cin >> t;
    
    for (int i=1; i<=t; ++i){
        vector <int> N;
        cin >> n;
        for (int j=1; j<=n; ++j){
            cin >> speed;
            N.push_back(speed);
        }
        sort(N.begin(), N.end());

        cout << "Case " << i << ": " << N[n - 1] << endl;
    }
    
    return 0;
}
// 	Accepted 0.010