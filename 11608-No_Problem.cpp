#include <iostream>
using namespace std;

int main(){
    int problem;
    int cases = 1;

    while (cin >> problem && problem >= 0){
        cout << "Case " << cases << ":" << endl;
        int ready = 0;
        int Created[13];
        int Required[12];

        Created[0] = problem;

        for (int i = 1; i < 13; ++i){
            cin >> problem;
            Created[i] = problem;
        }

        for (int i = 0; i < 12; ++i){
            cin >> problem;
            Required[i] = problem;
        }

        for (int i = 0; i < 12; ++i){
            ready += Created[i];

            if (ready >= Required[i]){
                ready -= Required[i];
                cout << "No problem! :D" << endl;
            }else{
                cout << "No problem. :(" << endl;
            }
        }
        cases++;
    }

    return 0;
}

// 5 3  0 3 5 8 2 1 0 3 5 6 9
// 0 0 10 2 6 4 1 0 1 1 2 2