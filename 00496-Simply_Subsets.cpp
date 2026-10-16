// 輸入可能重複，例如1, 1, 2 / 1，same = 2，不能直接用vector
#include <iostream>
#include <string>
#include <sstream>
#include <set>
using namespace std;

int main(){
    string IptA, IptB;
    
    while (getline(cin, IptA) && getline(cin, IptB)){
        set <int> SetA, SetB;
        int num;
        
        stringstream ssA(IptA);
        while (ssA >> num) SetA.insert(num);
        
        stringstream ssB(IptB);
        while (ssB >> num) SetB.insert(num);
        
        int same = 0;
        
        for (int nA : SetA){
            if (SetB.count(nA)){
                same++;
            }
        }
        
        
        if (SetA == SetB){
            cout << "A equals B" << endl;
        }else if (same == SetA.size()){
            cout << "A is a proper subset of B" << endl;
        }else if (same == SetB.size()){
            cout << "B is a proper subset of A" << endl;
        }else if (same == 0){
            cout << "A and B are disjoint" << endl;
        }else{
            cout << "I'm confused!" << endl;
        }
    }
    return 0;
}