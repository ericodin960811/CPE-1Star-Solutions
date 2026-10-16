#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

struct Teams {
    int id, solved, penalty;
};

// 排序的準則：題數多的在前 > 罰時少的在前 > ID 小的在前
bool cmp(Teams a, Teams b) {
    if (a.solved != b.solved) return a.solved > b.solved;
    if (a.penalty != b.penalty) return a.penalty < b.penalty;
    return a.id < b.id;
}

int main() {
    int t;
    if (cin >> t) {
        cin.ignore(); cin.ignore();
        
        string line;
        
        while (t--) {
            bool conAC[101][10] = {false};
            int wa_before[101][10] = {0};
            bool appeared[101] = {false};
            int totalSolved[101] = {0};
            int totalPenalty[101] = {0};

            while (getline(cin, line) && line != "") {
                stringstream ss(line);
                int c, p, m;
                char l;
                ss >> c >> p >> m >> l;

                appeared[c] = true;

                if (conAC[c][p] == false) {
                    if (l == 'C') {
                        conAC[c][p] = true;
                        totalSolved[c]++;
                        totalPenalty[c] += (m + wa_before[c][p] * 20);
                    } else if (l == 'I') {
                        wa_before[c][p]++;
                    }
                }
            }
            vector<Teams> result;
            for (int i = 1; i <= 100; i++) {
                if (appeared[i] == true) {
                    Teams temp;
                    temp.id = i;
                    temp.solved = totalSolved[i];
                    temp.penalty = totalPenalty[i];
                    result.push_back(temp);
                }
            }

            sort(result.begin(), result.end(), cmp);

            for (int i = 0; i < result.size(); i++) {
                cout << result[i].id << " " << result[i].solved << " " << result[i].penalty << endl;
            }

            if (t > 0) cout << endl;
        }
    }
    return 0;
}
// Accepted	0.000
// 超煩
