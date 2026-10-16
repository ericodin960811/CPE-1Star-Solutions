#include <iostream>
#include <string>
using namespace std;

int main(){
    int t, n;
    string s;
    
    cin >> t;
    
    for (int i=1; i<=t; ++i){
        int counter = 0;
        
        cin >> n;
        cin >> s;
        for (int j=0; j<n; ++j){
            if (s[j] == '.'){
                counter++;
                j += 2;
            }
        }
        
        cout << "Case " << i << ": " << counter << endl;
    }
    
    return 0;
}
// ?