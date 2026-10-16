//不好搞，難題
/*
#include <iostream>
#include <vector>
#include <set> // 使用 set 來存歷史紀錄
using namespace std;

bool check_and_save(int N, vector<vector<int>>& board, set<vector<vector<int>>>& history) {
    vector<vector<int>> temp = current;
    bool found = false;

    // 檢查 4 個角度：0, 90, 180, 270
    for (int i = 0; i < 4; i++) {
        if (history.count(temp)) {
            found = true; 
        }
        temp = rotate90(N, temp); // 轉 90 度給下一次檢查用
    }

    // 如果 4 個角度都沒出現過，這是一個全新的圖案，把它存進歷史紀錄
    if (!found) {
        history.insert(current);
    }
    
    return found; // 回傳是否有重複
}


int main(){
    int N; // N*N and 2N步數

    while (cin >> N && N != 0){ //         2d              1d
        vector <vector <int>> checkerboard (N, vector <int> (N, 0));
        bool end = false;
        int x, y;
        char o;

        for (int i=0; i<N*2; ++i){
            cin >> x >> y >> o;

            if (end) continue;

            checkerboard[x-1][y-1] = (o == '+');

            if (check_and_save(N, checkerboard, history)) { // 重複了
                end = true;

                if (i % 2 == 0) cout << "Player 2 wins on move " << i + 1 << '\n';
                else cout << "Player 1 wins on move " << i + 1 << '\n';
            }
        }

        if (!end) cout << "Draw" << '\n';
    }

    return 0;
}
*/