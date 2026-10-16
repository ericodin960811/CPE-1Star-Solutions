#include <iostream>
#include <algorithm>
using namespace std;

struct Face{
    int w, h;
};

bool cmp (Face a, Face b){
    if (a.w == b.w){
        return (a.h < b.h);
    }else{
        return (a.w < b.w);
    }
}

int main(){
    int l1, l2;
    while (cin >> l1 >> l2){
        Face wood[6];
        wood[0].w = min(l1, l2);
        wood[0].h = max(l1, l2);
        
        for (int i=1; i<6; ++i){
            cin >> l1 >> l2;
            wood[i].w = min(l1, l2);
            wood[i].h = max(l1, l2);
        }
        
        sort (wood, wood + 6, cmp); // wood 起點本身就代表wood[0]
        
        bool isTwin = (wood[0].w == wood[1].w && wood[0].h == wood[1].h &&
                       wood[2].w == wood[3].w && wood[2].h == wood[3].h &&
                       wood[4].w == wood[5].w && wood[4].h == wood[5].h);
               
        bool isConnect = (wood[0].w == wood[2].w &&
                          wood[0].h == wood[4].w &&
                          wood[4].h == wood[2].h);
                          
        if (isTwin && isConnect) {
            cout << "POSSIBLE" << endl;
        } else {
            cout << "IMPOSSIBLE" << endl;
        }
    }
    
    return 0;
}
// AC (1ms, 304KB) 
// 有難，要會寫struct, sort，邏輯還要完全對。