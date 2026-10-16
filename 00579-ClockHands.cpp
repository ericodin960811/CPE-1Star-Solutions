#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main(){
    string ClockTime;
    int hours, minutes;
    char colon;
    double deg;
    
    while (cin >> ClockTime && ClockTime != "0:00"){
        stringstream ss (ClockTime);
        if (ss >> hours >> colon >> minutes){
            double h, m;
            
            m = minutes * 6.0;
            h = hours * 30.0 + m / 12.0;
            deg = m - h;
        }
        
        if (deg < 0){
            deg = -deg;
        }
        if (deg > 180){
            deg = 360 - deg;
        }
        cout << fixed << setprecision(3) << deg << endl;
    }
    
    return 0;
}