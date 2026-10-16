// 下一個被殺的人索引：(cur + m - 1) % n
#include <iostream>
using namespace std;

int main(){
    int goodNum; // k

    while (cin >> goodNum && goodNum){
        for (int killIndex=goodNum; ; ++killIndex){ // m
            int currentIndex = 0;
            int totalNum = goodNum * 2; // n
            bool killGood = false;

            for (int i = 0; i < goodNum; ++i) { // 殺死 k 個壞人
                currentIndex = (currentIndex + killIndex - 1) % (totalNum - i);
                
                if (currentIndex < goodNum) { // 殺到好人
                    killGood = true;
                    break; 
                }
            }

            if (!killGood) { // 殺完壞人
                cout << killIndex << endl;
                break;
            }
        }
    }

    return 0;
}
// 對的，但TLE