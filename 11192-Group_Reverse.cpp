#include <iostream>
#include <string>
using namespace std;

int main(){
    int group;
    int gn;
    string S;
    
    while (cin >> group && group != 0){
        cin >> S;
        string Ans = "";
        
        gn = S.size() / group;
        
        for (int i=1; i<=group; ++i){
            for (int j=i*gn-1; j>=i*gn-gn; --j){
                Ans += S[j];
            }
        }
        cout << Ans << endl;
    }
    
    return 0;
}
// AC (1ms, 292KB)