#include <iostream>
#include <string>
using namespace std;

int main(){
    string Table = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string line;
    
    while (getline(cin, line)){
        for (char c : line){
            bool found = false;
            
            for (int i=0; i<Table.size(); ++i){
                if (Table[i] == c){
                    cout << Table[i - 1];
                    found = true;
                }
            }
            if (!found){
                cout << c;
                found = false;
            }
        }
        cout << '\n';
    }
    
    return 0;
}
// AC (1ms, 288KB)