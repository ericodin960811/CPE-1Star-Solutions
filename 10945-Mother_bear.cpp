#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string line;
    while (getline(cin, line)){
        if (!line.empty() && line.back() == '\r'){
            line.pop_back();
        }
        if (line == "DONE") break;
        
        string s = "";
        for (char c : line){
            if (isalpha(c)){
                s += tolower(c);
            }
        }
        
        bool NotEaten = true;
        for (int i=0; i<(int)s.size()/2; ++i){
            if (s[i] != s[s.size() - i - 1]){
                NotEaten = false;
                break;
            }
        }
        if (NotEaten){
            cout << "You won't be eaten!" << endl;
        }else{
            cout << "Uh oh.." << endl;
        }
    }
    
    return 0;
}
// Accepted	0.000
// 下面應該也可以，只是uva在搞，結束點和size型別要改。

// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;

// int main(){
//     string line;
//     while (getline(cin, line) && line != "DONE"){
//         string s = "";
//         for (char c : line){
//             if (isalpha(c)){
//                 s += tolower(c);
//             }
//         }
        
//         bool NotEaten = true;
//         for (int i=0; i<(int)s.size()/2; ++i){
//             if (s[i] != s[s.size() - i - 1]){
//                 NotEaten = false;
//                 break;
//             }
//         }
//         if (NotEaten){
//             cout << "You won’t be eaten!" << endl;
//         }else{
//             cout << "Uh oh.." << endl;
//         }
//     }
    
//     return 0;
// }