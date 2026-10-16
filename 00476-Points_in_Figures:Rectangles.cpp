#include <iostream>
using namespace std;

struct Rectangle{
    double x1, y1, x2, y2;
};

int main(){
    Rectangle rects[11];
    char type;
    int r = 0;
    
    while (cin >> type){
        if (type == 'r'){
            cin >> rects[r].x1 >> rects[r].y1 >> rects[r].x2 >> rects[r].y2;
            ++r;
            
        }else if(type == '*'){
            int PointNum = 1;
            double x3, y3;
            
            while (cin >> x3 >> y3 && x3 != 9999.9 && y3 != 9999.9){
                bool inFigure = false;
                
                for (int i=0; i<r; ++i){
                    if (x3 > rects[i].x1 && x3 < rects[i].x2 && y3 < rects[i].y1 && y3 > rects[i].y2){
                        cout << "Point " << PointNum << " is contained in figure " << i + 1 << endl;
                        inFigure = true;
                    }
                }
                if (!inFigure){
                    cout << "Point " << PointNum << " is not contained in any figure" << endl;
                }
                PointNum++;
            }
        }
    }
    
    return 0;
}