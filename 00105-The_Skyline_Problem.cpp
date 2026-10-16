// 圖怪怪的別看。輸入 1 11 5 代表從 1 開始 11(1) 11(2) 11(3) 11(4) 0(5)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> skyline (10001);
    int l, h, r;
    int maxlength = 0;

    while (cin >> l >> h >> r && (l != 0 || h != 0 || r != 0)){
        maxlength = max (maxlength, r);

        for(int i=l; i<r; ++i){
            int Max = max(h, skyline[i]);
            skyline[i] = Max;
        }
    }

    int state = 0;

    for (int i=0; i<=maxlength; ++i){
        if (skyline[i] != state){
            cout << i << ' ' << skyline[i] << ' ';
            state = skyline[i];
        }
    }

    return 0;
}

// 	AC (6ms, 360KB)