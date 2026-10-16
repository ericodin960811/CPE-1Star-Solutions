#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, d, r;
    int m, a;
    
    while (cin >> n >> d >> r && (n != 0 && d != 0 && r != 0)){
        int dsum = 0;
        vector <int> morning;
        vector <int> evening;
        
        for (int i=0; i<n; ++i){
            cin >> m;
            morning.push_back(m);
        }
        sort(morning.begin(), morning.end());
        
        for (int i=0; i<n; ++i){
            cin >> a;
            evening.push_back(a);
        }
        sort(evening.begin(), evening.end(), greater<int>());
        
        for (int i=0; i<n; ++i){
            if (morning[i] + evening[i] > d){
                dsum += (morning[i] + evening[i]) - d;
            }
        }
        cout << dsum * r << endl;
    }
        
    return 0;
}
// AC (1ms, 300KB)