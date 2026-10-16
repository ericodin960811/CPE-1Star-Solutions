#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string sentence;
    
    while (getline(cin, sentence)){
        int counter = 0;
        bool word = false;
        
        for (char c : sentence){
            if (isalpha(c)){
                if (word == false){
                    word = true;
                    counter++;
                }
            }else{
                word = false;
            }
        }
        
        cout << counter << endl;
    }
    return 0;
}