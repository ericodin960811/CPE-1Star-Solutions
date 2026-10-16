#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    string OrgName, NewName;
    
    while (t--){
        bool legal = true;
        cin >> OrgName >> NewName;
        
        if (OrgName.size() != NewName.size()) legal = false;
        
        for (int i=0; i<OrgName.size(); ++i){
            if (OrgName[i] != 'a' && OrgName[i] != 'e' && OrgName[i] != 'i' && 
                OrgName[i] != 'o' && OrgName[i] != 'u'){
                if (OrgName[i] != NewName[i]){
                    legal = false;
                    break;
                }
            }else{ // is vowel
                if (NewName[i] != 'a' && NewName[i] != 'e' && NewName[i] != 'i' && 
                    NewName[i] != 'o' && NewName[i] != 'u'){
                    legal = false;
                    break;
                }
            }
        }
        if (legal){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    
    return 0;
}