#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    int t;
    int counter = 1;
    string s;

    while (cin >> t && t != 0) {
        cin.ignore();
        vector<string> VecAns;
        string allDigitsAns = "";

        while (t--) {
            getline(cin, s);
            VecAns.push_back(s);
            for (char c : s) {
                if (isdigit(c)) {
                    allDigitsAns += c;
                }
            }
        }

        int t2;
        cin >> t2;
        cin.ignore();
        vector<string> VecInput;
        string allDigitsInput = "";

        while (t2--) {
            getline(cin, s);
            VecInput.push_back(s);
            for (char c : s) {
                if (isdigit(c)) {
                    allDigitsInput += c;
                }
            }
        }

        cout << "Run #" << counter << ": ";

        if (VecAns == VecInput) {
            cout << "Accepted" << endl; 
        } else if (allDigitsAns == allDigitsInput) {
            cout << "Presentation Error" << endl;
        } else {
            cout << "Wrong Answer" << endl;
        }
        counter++;
    }

    return 0;
}
// Accepted	0.000