#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    while (cin >> t && t != 0){
        int x, y, z, l;
        cin >> x >> y >> z >> l; // l >< 0
        
        int x_floor = min(x, x + l);
        int y_floor = min(y, y + l);
        int z_floor = min(z, z + l);
        
        int x_roof = max(x, x + l);
        int y_roof = max(y, y + l);
        int z_roof = max(z, z + l);
        
        for (int i=1; i<t; ++i){
            cin >> x >> y >> z >> l;
            x_floor = max(x_floor, min(x, x + l));
            y_floor = max(y_floor, min(y, y + l));
            z_floor = max(z_floor, min(z, z + l));
            
            x_roof = min(x_roof, max(x, x + l)); 
            y_roof = min(y_roof, max(y, y + l));
            z_roof = min(z_roof, max(z, z + l));
        }
        
        int dx = x_roof - x_floor;
        int dy = y_roof - y_floor;
        int dz = z_roof - z_floor;
        
        if (dx > 0 && dy > 0 && dz > 0){
            cout << dx * dy * dz << endl;
        }else{
            cout << "0" << endl;
        }
    }
    
    return 0;
}
// 厲害，要先想到l正負都可以，代表要針對一開始的變數判斷。然後最後要判斷實際上有沒有交到。
