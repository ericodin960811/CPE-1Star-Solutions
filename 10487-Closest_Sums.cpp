#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    int counter = 1;
    
    while (cin >> n && n != 0){
        cout << "Case " << counter << ':' << endl;
        vector <int> numsVec;
        int num;
        
        while (n--){
            cin >> num;
            numsVec.push_back(num);
        }
        
        cin >> m;
        int clstm;
        
        while (m--){
            cin >> clstm;
            int clstsum = numsVec[0] + numsVec[1];
            int distance = abs(clstm - (numsVec[0] + numsVec[1]));
            
            for (int i=0; i<numsVec.size(); ++i){
                for (int j=0; j<numsVec.size(); ++j){
                    if (i != j){
                        if (distance > abs(clstm - (numsVec[i] + numsVec[j]))){
                            clstsum = numsVec[i] + numsVec[j];
                            distance = abs(clstm - (numsVec[i] + numsVec[j]));
                        }
                    }
                }
            }
            
            cout << "Closest sum to " << clstm << " is " << clstsum << '.' << endl;
        }
        counter++;
    }
    
    return 0;
}
// AC (16ms, 316KB)