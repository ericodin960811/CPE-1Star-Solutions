#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    string line;
    int counter = 1;
    
    while (getline(cin, line)){
        vector <int> countline;
        countline.push_back(0);
        
        cout << "Case " << counter << ':' << endl;
        
        int cnt = 0;
        for (int i=0; i<line.size() - 1; ++i){
            if (line[i + 1] != line[i]){
                cnt++;
            }
            countline.push_back(cnt);
        }
        
        cin >> n;
        int i, j, k;
        while (n--){
            cin >> i >> j;
            if (countline[i] == countline[j]){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
        counter++;
        cin.ignore();
    }
    
    return 0;
}
// 	AC (1ms, 432KB)
// 記得不要用 string 存countline，不然超過十位數就會跑掉