#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    string n;

    while (cin >> n && n != "0"){
        cout << "Original number was " << n << endl;
        
        set <int> Set;
        int counter = 1;

        while (true){
            sort(n.begin(), n.end(), greater <int> ());
            int descending = stoi(n);
            reverse(n.begin(), n.end());
            int ascending = stoi(n);
            int res = descending - ascending;

            cout << descending << " - " << ascending << " = " << res << endl;

            if (Set.count(res) == 1){
                break;
            }else{
                Set.insert(res);
                n = to_string(res);
                counter++;
            }
        }

        cout << "Chain length " << counter << endl << endl;
    }

    return 0;
}