#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int n, t;
    int player1, player2;
    string move1, move2;
    bool flag = false;
    
    while (cin >> n && n != 0){
        cin >> t;
        double sit[101][2] = {0};
        int times = t * n * (n - 1) / 2;
        
        while (times--){
            cin >> player1 >> move1 >> player2 >> move2;
            
            if (move1 != move2){
                int m1, m2;
                
                if (move1 == "paper"){
                    m1 = 0;
                }else if (move1 == "scissors"){
                    m1 = 1;
                }else{
                    m1 = 2;
                }
                if (move2 == "paper"){
                    m2 = 0;
                }else if (move2 == "scissors"){
                    m2 = 1;
                }else{
                    m2 = 2;
                }
                
                if ((m1 + 1) % 3 == m2){
                    // m2
                    sit[player2][0] += 1.0;
                    sit[player1][1] += 1.0;
                }else{
                    // m1
                    sit[player1][0] += 1.0;
                    sit[player2][1] += 1.0;
                }
            }
        }
        
        if (!flag){
            flag = true;
        }else{
            cout << '\n';
        }
        
        for (int i=1; i<=n; ++i){
            double total = sit[i][0] + sit[i][1];
            
            if (total == 0.0){
                cout << '-' << endl;
            }else{
                cout << fixed << setprecision(3) << sit[i][0] / (sit[i][0] + sit[i][1]) << endl;
            }
        }
    }
    
    return 0;
}
// Accepted	0.220