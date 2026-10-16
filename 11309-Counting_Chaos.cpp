#include <iostream>
#include <iomanip>
using namespace std;

bool isPalindrome(int n){
    int org = n;
    int reverse = 0;
    
    while (n > 0){
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    
    if (org == reverse){
        return true;
    }else{
        return false;
    }
}

int main(){
    int t;
    cin >> t;
    
    int h, m, Time;
    char gbg;
    
    while (t--){
        cin >> h >> gbg >> m;
        
        while (true){
            m++;
            
            if (m == 60){
                m = 0;
                h++;
                if (h == 24){
                    h = 0;
                }
            }
            
            Time = h * 100 + m;
            if (isPalindrome(Time)){
                cout << setfill('0') << setw(2) << h << ':' << setfill('0') << setw(2) << m << endl;
                break;
            }
        }
    }
    
    return 0;
}
// AC (2ms, 284KB)