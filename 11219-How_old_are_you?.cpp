#include <iostream>
using namespace std;

struct date{
    int y, m, d;
};

int main(){
    int t;
    cin >> t;
    cin.ignore();
    
    for (int i=1; i<=t; ++i){
        cin.ignore();
        int inputD, inputM, inputY;
        date now, birth;
        char gbg;
        int age = 0;
        
        cin >> inputD >> gbg >> inputM >> gbg >> inputY;
        now.y = inputY;
        now.m = inputM;
        now.d = inputD;
        
        cin >> inputD >> gbg >> inputM >> gbg >> inputY;
        birth.y = inputY;
        birth.m = inputM;
        birth.d = inputD;
        
        if (birth.y > now.y){
            age = -1;
        }else if (birth.y == now.y){
            if (birth.m > now.m){
                age = -1;
            }else if (birth.m == now.m){
                if (birth.d > now.d){
                    age = -1;
                }else{
                    age = 0;
                }
            }else{ // birth.m < now.m
                age = 0;
            }
        }else{ // birth.y < now.y
            if (birth.m > now.m){
                age = 0;
            }else if (birth.m == now.m){
                if (birth.d > now.d){
                    age = now.y - birth.y - 1;
                }else if (birth.d == now.d){
                    age = now.y - birth.y;
                }else{ // birth.d < now.d
                    age = now.y - birth.y;
                }
            }else{ // birth.m < now.m
                age = now.y - birth.y;
            }
        }
        
        cout << "Case #" << i << ": ";
        if (age == -1){
            cout << "Invalid birth date" << endl;
        }else if (age > 130){
            cout << "Check birth date" << endl;
        }else{
            cout << age << endl;
        }
    }
    
    return 0;
}