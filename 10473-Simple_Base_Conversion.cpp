#include <iostream>
#include <string>
using namespace std;

int main(){
    string num;
    
    while (cin >> num && num[0] != '-'){
        if (num[0] == '0'){
            int n = stoi(num, nullptr, 0);
            cout << dec << n << endl;
        }else{
            int n = stoi(num);
            cout << "0x" << hex << uppercase << n << endl;
        }
    }
    
    return 0;
}

// 	AC (1ms, 296KB)
// stoi (stoll(long long) 的完整格式是 stoi(string, ptr, base)，ptr 沒有，
// base 填 0 就是給電腦自動判斷。
// 也可以把 0x 弄掉，給他 stoi(num, nullptr, 16)。