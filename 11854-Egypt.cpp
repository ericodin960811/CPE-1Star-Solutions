#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c;
    while (cin >> a >> b >> c && !(a == 0 && b == 0 && c == 0)){
        vector <int> tri;
        tri.push_back(a);
        tri.push_back(b);
        tri.push_back(c);
        
        sort(tri.begin(), tri.end());
        
        if (tri[0]*tri[0] + tri[1]*tri[1] == tri[2]*tri[2]){
            cout << "right" << endl;
        }else{
            cout << "wrong" << endl;
        }
    }
    
    return 0;
}
// Accepted	0.000