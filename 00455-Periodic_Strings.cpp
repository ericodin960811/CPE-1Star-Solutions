#include <iostream>
#include <string>
using namespace std;

int main(){
    int testCase;
    string input;

    cin >> testCase;
    cin.ignore();

    for (int i=0; i<testCase; ++i){
        bool find = false;

        cin.ignore();
        getline(cin, input);
        
        for (size_t j=1; j<=input.size()/2; ++j){ // 整除的才有可能是，不然大小對不上
            if (input.size() % j == 0){
                string PeriodStr = input.substr(0, j); // 一開始只有 index 0
                string idealStr = "";

                for (size_t k=0; k<input.size()/j; ++k){ // idealStr 完成
                    idealStr += PeriodStr;
                }

                if (idealStr == input){
                    cout << j << '\n';
                    find = true;
                    break;
                }

            }
        }
        if (!find) cout << input.size() << '\n';
    }

    return 0;
}

// AC (3ms, 320KB)