#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    string num;
    
    cin >> t;
    while (t--){
        cin >> num;
        if (num.size() == 5){
            cout << "3" << endl;
        }else{
            int oneCounter = 0;
            if (num[0] == 'o') oneCounter++;
            if (num[1] == 'n') oneCounter++;
            if (num[2] == 'e') oneCounter++;
            
            if (oneCounter >= 2){
                cout << "1" << endl;
            }else{
                cout << "2" << endl;
            }
        }
    }
    
    return 0;
}