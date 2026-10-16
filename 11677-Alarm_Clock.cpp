#include <iostream>
using namespace std;

int main(){
    int h1, m1, h2, m2;
    int time;

    while (cin >> h1 >> m1 >> h2 >> m2){
        if (h2 > h1){
            cout << 60 * (h2 - h1) + (m2 - m1) << endl;
        }else if (h1 > h2){
            cout << 60 * (23 - h1) + (60 - m1) + 60 * h2 + m2 << endl;
        }else { // ==
            if (m2 > m1){
                cout << m2 -m1 << endl;
            }else if (m1 > m2){
                cout << 1440 - (m1 - m2) << endl;
            }else{
                if (m1 != 0){
                    cout << 0 << endl;
                }else{
                    return 0;
                }
            }
        }
    }
    return 0;
}