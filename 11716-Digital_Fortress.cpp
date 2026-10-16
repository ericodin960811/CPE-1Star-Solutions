#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int t;
    string s;

    cin >> t;
    cin.ignore();

    while (t--){
        getline(cin, s);
        int sq = sqrt(s.size());

        if (sq * sq == s.size()){
            for (int i = 0; i < sq; ++i){
                for (int j = i; j < s.size(); j += sq){
                    cout << s[j];
                }
            }
            cout << endl;
        }else{
            cout << "INVALID" << endl;
        }
    }

    return 0;
}