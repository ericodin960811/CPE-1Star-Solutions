#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, w, h;

    while (cin >> n && n){
        double type1, type2, type3;
        int max_index = 0;
        double max_size = 0;

        for (int i = 1; i <= n; ++i){
            cin >> w >> h;

            type1 = min(w / 4.0, (double)h);
            type2 = min((double)w, h / 4.0);
            type3 = min(w / 2.0, h / 2.0);

            double curr_max = max({type1, type2, type3});

            if (curr_max > max_size){
                max_index = i;
                max_size = curr_max;
            }
        }
        cout << max_index << endl;
    }

    return 0;
}

// 1. XXXX

// 2. X
//    X
//    X
//    X

// 3. XX
//    XX