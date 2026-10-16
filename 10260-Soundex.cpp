#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string line;
    while (cin >> line){
        string changedStr = "";
        string ans = "";
        
        for (char c : line){
            if (c == 'B' || c == 'F' || c == 'P' || c =='V'){
                changedStr += "1";
            }else if (c == 'C' || c == 'G' || c == 'J' || c == 'K' || c == 'Q' || c == 'S' || c == 'X' || c == 'Z'){
                changedStr += "2";
            }else if (c == 'D' || c == 'T'){
                changedStr += "3";
            }else if (c == 'L'){
                changedStr += "4";
            }else if (c == 'M' || c == 'N'){
                changedStr += "5";
            }else if (c == 'R'){
                changedStr += "6";
            }else{
                changedStr += c;
            }
        }
        
        char last = '0';
        for (char c : changedStr){
            if (isdigit(c) && last != c){
                ans += c;
                last = c;
            }else if (isdigit(c) && last == c){
                last = c;
            }else{
                last = '0';
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
// 	AC (1ms, 308KB)