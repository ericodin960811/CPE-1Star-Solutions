#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t, n;
    int counter = 1;
    long long product;
    
    while (cin >> t){
        vector <int> Nums;
        long long MaxProduct = 0;
        
        while (t--){
            cin >> n;
            Nums.push_back(n);
        }
        
        for (int i=0; i<Nums.size(); ++i){
            product = 1;
            
            for (int j=i; j<Nums.size(); ++j){
                product *= Nums[j];
                if (product > MaxProduct){
                    MaxProduct = product;
                }
            }
        }
        
        cout << "Case #" << counter << ": The maximum product is " << MaxProduct << '.' << endl;

        cout << '\n';
        counter++;
    }
    
    return 0;
}
// AC (1ms, 300KB)
// zero judge 測試執行錯了，直接交。