#include <iostream>
using namespace std;

int table[50005][3];
int found[50005];

int main(){
    int t, n;
    
    for (int i=0; i<=233; ++i){
        for (int j=i; j<=233; ++j){
            for (int k=j; k<=233; ++k){
                if (i*i + j*j + k*k <= 50000 && found[i*i + j*j + k*k] == 0){
                    table[i*i + j*j + k*k][0] = i;
                    table[i*i + j*j + k*k][1] = j;
                    table[i*i + j*j + k*k][2] = k;
                    found[i*i + j*j + k*k] = 1;
                }
            }
        }
    }
    
    cin >> t;
    
    while (t--){
        cin >> n;
        
        if (found[n] == 1){
            cout << table[n][0] << ' ' << table[n][1] << ' ' << table[n][2] << endl;
        }else{
            cout << "-1" << endl;
        }
    }
    
    return 0;
}
// AC (8ms, 1.3MB)