#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string line, eng, frn, s;
    map <string, string> dic;
    
    while (getline(cin, line) && line != ""){
        stringstream ss(line);
        ss >> eng >> frn;
        dic[frn] = eng;
    }
    while (cin >> s){
        if (dic.count(s) > 0){
            cout << dic[s] << endl;
        }else{
            cout << "eh" << endl;
        }
    }
    
    return 0;
}
// Accepted	0.310