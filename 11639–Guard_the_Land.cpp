#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    for (int i = 1; i <= t; ++i) {
        int r1x1, r1y1, r1x2, r1y2;
        int r2x1, r2y1, r2x2, r2y2;
        cin >> r1x1 >> r1y1 >> r1x2 >> r1y2;
        cin >> r2x1 >> r2y1 >> r2x2 >> r2y2;

        int area1 = (r1x2 - r1x1) * (r1y2 - r1y1);
        int area2 = (r2x2 - r2x1) * (r2y2 - r2y1);

        int inter_lx = max(r1x1, r2x1);
        int inter_rx = min(r1x2, r2x2);
        int inter_ly = max(r1y1, r2y1);
        int inter_ry = min(r1y2, r2y2);

        int ss = 0;
        int inter_w = inter_rx - inter_lx;
        int inter_h = inter_ry - inter_ly;
        if (inter_w > 0 && inter_h > 0) {
            ss = inter_w * inter_h;
        }

        int weakly = area1 + area2 - 2 * ss;
        int unguarded = 10000 - (area1 + area2 - ss);

        cout << "Night " << i << ": " << ss << " " << weakly << " " << unguarded << endl;
    }
    return 0;
}
// 不要預設輸入剛好部分重疊，先處理重疊部分的範圍才能相乘。
// 右小減左大，上小減下大。