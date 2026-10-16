#include <iostream>
using namespace std;

int main(){
    int s;
    int counter = 1;
    int ans[1005];

    for (int i = 0; i <= 1000; ++i){
        ans[i] = -1;
    }

    for (int i = 1; i <= 1000; ++i){
        int sum = 0;

        for (int j = 1; j <= 1000; ++j){
            if (i % j == 0){
                sum += j;
            }
        }
        if (sum <= 1000) {
            ans[sum] = i;
        }
    }
    
    while (cin >> s && s){
        cout << "Case " << counter++ << ": " << ans[s] << endl;
    }

    return 0;
}
