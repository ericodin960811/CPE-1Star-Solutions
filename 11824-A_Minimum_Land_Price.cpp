#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int t, cost;
    
    cin >> t;
    while (t--){
        vector <int> Costs;
        
        while (cin >> cost && cost != 0) {
            Costs.push_back(cost);
        }
            
        sort(Costs.begin(), Costs.end());
        
        long long total = 0;
        
        for (int i=0; i<Costs.size(); ++i){
            total += (2 * pow(Costs[Costs.size() - i - 1], i + 1) + 1e-9);
        }
        
        if (total > 5000000){
            cout << "Too expensive" << endl;
        }else{
            cout << total << endl;
        }
        
    }
    
    return 0;
}
// Accepted	0.000