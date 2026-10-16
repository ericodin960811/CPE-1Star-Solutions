#include <iostream>
#include <string>
#include <iomanip> // setfill('0')
#include <algorithm>
using namespace std;

struct times{
    int h1, m1, h2, m2;
    int start, end;
};

bool cmp(times itvl1, times itvl2){
    return (itvl1.start < itvl2.start);
}

int main(){
    int TestCase;
    int counter = 0;
    
    while (cin >> TestCase){
        char dummy;
        string gbg;
        
        times Interval [TestCase];
        for (int i=0; i<TestCase; ++i){
            cin >> Interval[i].h1 >> dummy >> Interval[i].m1
                >> Interval[i].h2 >> dummy >> Interval[i].m2;
            cin.ignore();
            getline(cin, gbg);
            
            Interval[i].start = Interval[i].h1 * 60 + Interval[i].m1;
            Interval[i].end = Interval[i].h2 * 60 + Interval[i].m2;
        }
        sort (Interval, Interval + TestCase, cmp);
        
        counter++;
        
        int mnt = Interval[0].start - 600;
        int h = 10;
        int m = 0;
        
        
        for (int i=0; i<TestCase-1; ++i){
            if (mnt < (Interval[i + 1].start - Interval[i].end)){
                mnt = (Interval[i + 1].start - Interval[i].end);
                h = Interval[i].h2;
                m = Interval[i].m2;
            }
        }
        
        if (mnt < (1080 - Interval[TestCase - 1].end)){
            mnt = 1080 - Interval[TestCase - 1].end;
            h = Interval[TestCase - 1].h2;
            m = Interval[TestCase - 1].m2;
        }
    
        cout << "Day #" << counter << ": the longest nap starts at "
             << h << ":" << setfill('0') << setw(2) << m
             << " and will last for ";
             
        
        if (mnt >= 60) {
            cout << mnt / 60 << " hours and " << mnt % 60 << " minutes." << endl;
        } else {
            cout << mnt << " minutes." << endl;
        }
    }
    
    return 0;
}
// 	AC (13ms, 312KB) 
// 擊芭煩，別寫。