#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    int mapT, inputT;
    string key, val, inputS;
    map <string, string> Map;
    
    cin >> mapT >> inputT;
    
    while (mapT--){
        cin >> key >> val;
        Map[key] = val;
    }
    
    while (inputT--){
        cin >> inputS;
        if (Map.count(inputS)){
            cout << Map[inputS] << endl;
        }else{
            if (inputS[inputS.size() - 1] == 'y'){
                if (inputS[inputS.size() - 2] != 'a' && inputS[inputS.size() - 2] != 'e' && inputS[inputS.size() - 2] != 'i' && 
                    inputS[inputS.size() - 2] != 'o' && inputS[inputS.size() - 2] != 'u'){
                        inputS.erase(inputS.size() - 1, 1);
                        inputS += "ies";
                        cout << inputS << endl;
                }else{
                    inputS += 's';
                    cout << inputS << endl;
                }
            }else if (inputS[inputS.size() - 1] == 'o' || inputS[inputS.size() - 1] == 's' || 
                      inputS[inputS.size() - 1] == 'h' || inputS[inputS.size() - 1] == 'x'){
                if (inputS[inputS.size() - 1] == 'h'){
                    if (inputS[inputS.size() - 2] == 's' || inputS[inputS.size() - 2] == 'c'){
                        inputS += "es";
                        cout << inputS << endl;
                    }else{
                        inputS += 's';
                        cout << inputS << endl;
                    }
                }else{
                    inputS += "es";
                    cout << inputS << endl;
                }
            }else{
                inputS += 's';
                cout << inputS << endl;
            }
        }
    }
    
    return 0;
}
// 	AC (1ms, 336KB)