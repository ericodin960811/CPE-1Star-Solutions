#include <iostream>
#include <string>
using namespace std;

long long reverse(long long n){
    long long rev = 0;
    int reminder;
    
    while (n > 0){
        reminder = n % 10;
        n /= 10;
        
        rev = rev * 10 + reminder;
    }
    
    return rev;
}

int main(){
    int TestCase;
    cin >> TestCase;
    
    while (TestCase--){
        int counter = 0;
        long long num;
        
        cin >> num;
        
        do {
            num += reverse(num);
            counter++;
        } while (num != reverse(num));
        
        cout << counter << " " << num << endl;
    }
    
    return 0;
}
// AC (1ms, 296KB)