#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void printAns(string an){
    for (int i=0; i<an.size(); ){
        if (isalpha(an[i])){
            char a = an[i];
            i++;
            
            int num = 0;
            while (isdigit(an[i])){
                num = num * 10 + (an[i] - '0');
                i++;
            }
            
            while (num--){
                cout << a;
            }
        }
    }
    cout << '\n';
}

int main(){
    int cases;
    int c = 0;
    cin >> cases;
    
    while (c < cases){
        c++;
        string AlphaAndNum;
        
        cin >> AlphaAndNum;
        cout << "Case " << c << ": ";
        printAns(AlphaAndNum);
    }
    
    return 0;
}