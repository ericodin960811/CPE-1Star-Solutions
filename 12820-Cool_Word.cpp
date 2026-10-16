#include <iostream>
#include <string>
#include <map>
using namespace std;

bool isCoolWord(string n){
    map <char, int> CharMap;
    for (char c : n){
        CharMap[c]++;
    }
    
    if (CharMap.size() < 2){
        return false;
    }
    
    map <int, int> TimesMap;
    for (auto t : CharMap){
        TimesMap[t.second]++;
    }
    
    return (TimesMap.size() == CharMap.size());
}

int main(){
    int times;
    int cases = 0;
    
    while (cin >> times){
        cases++;
        int counter = 0;
        string name;
        
        while (times--){
            cin >> name;
            if (isCoolWord(name)){
                counter++;
            }
        }
        cout << "Case " << cases << ": " << counter << endl;
    }
    
    return 0;
}