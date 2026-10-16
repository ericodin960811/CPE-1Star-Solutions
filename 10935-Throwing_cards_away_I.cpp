#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    
    while (cin >> n && n != 0){
        vector <int> discard;
        vector <int> remain;
        
        for (int i=1; i<=n; ++i){
            remain.push_back(i);
        }
        
        while (remain.size() > 1){
            discard.push_back(remain[0]);
            remain.erase(remain.begin());
            remain.push_back(remain[0]);
            remain.erase(remain.begin());
        }
        
        cout << "Discarded cards: ";
        for (int i=0; i<discard.size(); ++i){
            if (i != discard.size() - 1){
                cout << discard[i] << ", ";
            }else{
                cout << discard[i];
            }
        }
        cout << '\n';
        
        cout << "Remaining card: ";
        for (int i=0; i<remain.size(); ++i){
            if (i != remain.size() - 1){
                cout << remain[i] << ", ";
            }else{
                cout << remain[i];
            }
        }
        cout << '\n';
    }
    
    return 0;
}
// 	AC (1ms, 300KB)