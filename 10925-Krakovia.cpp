#include <iostream>
#include <string>
using namespace std;

string add(string a, string b){
    string s = "";
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
    
    while (i >= 0 || j >= 0 || carry){
        int sum = carry;
        if (i >= 0){
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0){
            sum += b[j] - '0';
            j--;
        }
        s = to_string(sum % 10) + s;
        carry = sum / 10;
    }
    
    return s;
}

string dvd(string a, int d){
    string s = "";
    long long rmd = 0; // 下面的
    bool started = false;
    
    for (int i=0; i<a.size(); ++i){
        rmd = rmd * 10 + (a[i] - '0');
        int q = rmd / d; // 上面的一位
        rmd = rmd % d;
        
        if (started || q > 0){
            s += to_string(q);
            started = true;
        }
    }
    
    return (s == "") ? "0" : s;
}

int main(){
    int t, n;
    string sum, s;
    int counter = 1;
    
    while (cin >> t >> n && !(t == 0 && n == 0)){
        sum = "0";
        
        while (t--){
            cin >> s;
            sum = add(sum, s);
        }
        
        cout << "Bill #" << counter << " costs " << sum << ": each friend should pay " << dvd(sum, n) << endl;
        cout << '\n';
        counter++;
    }
    
    return 0;
}
// long long 10^19
