#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    int t, nt, grade;
    cin >> t;
    while (t--){
        vector <int> grades;
        int sum = 0;
        
        cin >> nt;
        for (int i=0; i<nt; ++i){
            cin >> grade;
            sum += grade;
            grades.push_back(grade);
        }
        
        double avg = sum / nt;
        double higher = 0.0;
        
        for (int i=0; i<nt; ++i){
            if (grades[i] > avg){
                higher += 1.0;
            }
        }
        
        cout << fixed << setprecision(3) << higher / nt * 100.0 << '%' << endl;
    }
    
    return 0;
}
// Accepted	0.000