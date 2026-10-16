#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, t;
    
    while (cin >> s >> t){
        int jndex = 0;
        bool foundAll = true;
        
        for (int i=0; i<s.size(); ++i){
            bool crntfound = false;
            
            for (int j=jndex; j<t.size(); ++j){
                if (s[i] == t[j]){
                    jndex = j + 1;
                    crntfound = true;
                    break;
                }
            }
            if (!crntfound){
                foundAll = false;
                break;
            }
        }
        
        if (foundAll){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    
    return 0;
}
// AC (1ms, 328KB)
// 原來判斷結束後有沒有找到，就是下面接一個 flag 的判斷，for 迴圈跑完了就會確認 flag。