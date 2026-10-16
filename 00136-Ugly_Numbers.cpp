#include <iostream>
#include <vector>
using namespace std;

long long isUgly (long long n){ // 裡面必須只有2 3 5，其他的就回傳錯誤
    if (n > 1){
        if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0){
            if (n % 2 == 0){
                return isUgly(n / 2);
            }else if (n % 3 == 0){
                return isUgly(n / 3);
            }else{
                return isUgly(n / 5);
            }
            
        }else{
            return 0;
        }
    }else{
        return 1;
    }
}

int main(){
    vector <long long> ugly;
    ugly.push_back(1);

    int num = 2;
    int counter = 1;
    while (counter <= 1500){
        if (isUgly(num)){
            ugly.push_back(num);
            counter++;
        }
        num++;
    }

    cout << "The 1500'th ugly number is " << ugly[1499] << '.';

    return 0;
}
// AC (9s, 352KB)

// 用 p2, p3, p5 存可能的數字，再從裡面找最小的存進陣列，pn再往上存···可以壓到毫秒。