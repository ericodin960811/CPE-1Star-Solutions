#include <iostream>
#include <vector>
#include <string>
#include <cstring> // tolower
#include <sstream> // ss
using namespace std;

int main(){
    int keyNum, excuseNum;
    int counter = 1;

    while (cin >> keyNum >> excuseNum){
        vector <string> Keys;
        for (int i=0; i<keyNum; ++i){
            string key;
            cin >> key;
            Keys.push_back(key);
        }

        cin.ignore();

        vector <string> Excuses;
        vector <int> times (excuseNum, 0);

        for (int i=0; i<excuseNum; ++i){
            string excuse;
            getline(cin, excuse);
            Excuses.push_back(excuse);

            string lowerExcuse = excuse;

            for (char &c : lowerExcuse){
                if (isalpha(c)) c = tolower(c);
                else c = ' '; // 標點符號或空格
            }

            stringstream ss(lowerExcuse);
            string word;

            while (ss >> word){
                for (int j=0; j<keyNum; ++j){
                    if (word == Keys[j]){
                        times[i]++;
                    }
                }
            }
        }
        // 重複要印 

        int maxVal = 0;

        for (size_t i=0; i<times.size(); ++i){
            if (times[i] > maxVal){
                maxVal = times[i];
            }
        }

        cout << "Excuse Set #" << counter << '\n';

        for (size_t i=0; i<times.size(); ++i){
            if (times[i] == maxVal){
                cout << Excuses[i] << '\n';
            }
        }

        counter++;
    }

    return 0;
}

// 	AC (2ms, 308KB)