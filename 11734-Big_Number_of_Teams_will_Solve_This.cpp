#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int t;
    string output, ans;
    cin >> t;
    cin.ignore();

    for (int i = 1; i <= t; ++i){
        cout << "Case " << i << ": ";
        getline(cin, output);
        getline(cin, ans);

        if (output == ans){
            cout << "Yes" << endl;
        }else{
            stringstream ssO(output);
            stringstream ssA(ans);
            string O = "";
            string A = "";
            string temp;
            
            while (ssO >> temp){
                O += temp;
            }

            while (ssA >> temp){
                A += temp;
            }

            if (O == A){
                cout << "Output Format Error" << endl;
            }else{
                cout << "Wrong Answer" << endl;
            }
        }
    }

    return 0;
}