#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    cin.ignore();
    
    while (t--){
        string orgTable, newTable;
        getline(cin, orgTable);
        getline(cin, newTable);
        cout << newTable << endl;
        cout << orgTable << endl;
        
        string line;
        while (getline(cin, line) && line != ""){
            for (char c : line){
                bool found = false;
                
                for (int i=0; i<orgTable.size(); ++i){
                    if (c == orgTable[i]){
                        cout << newTable[i];
                        found = true;
                        break;
                    }
                }
                if (!found){
                    cout << c;
                }
            }
            cout << '\n';
        }
    }
    
    return 0;
}
// AC (1ms, 308KB)
// 有點不直觀，先t--讀入，再while(getline(cin, line))直到看到空的