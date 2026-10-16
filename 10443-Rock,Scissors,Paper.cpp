#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string line;
    int t;
    cin >> t;
    
    int r, c, n;
    for (int z=1; z<=t; ++z){
        cin >> r >> c >> n;
        cin.ignore();
        
        vector <vector <char>> Map1(r, vector <char> (c));
        for (int i=0; i<r; ++i){
            getline(cin, line);
            for (int j=0; j<c; ++j){
                Map1[i][j] = line[j];
            }
        }
        
        while (n--){
            vector <vector <char>> Map2(r, vector <char> (c));
            
            for (int i=0; i<r; ++i){
                for (int j=0; j<c; ++j){
                    if (Map1[i][j] == 'R'){
                        if (i > 0 && Map1[i-1][j] == 'P'){ Map2[i][j] = 'P'; continue;}
                        if (i < r-1 && Map1[i+1][j] == 'P'){ Map2[i][j] = 'P'; continue;}
                        if (j > 0 && Map1[i][j-1] == 'P'){ Map2[i][j] = 'P'; continue;}
                        if (j < c-1 && Map1[i][j+1] == 'P'){ Map2[i][j] = 'P'; continue;}
                        Map2[i][j] = 'R';
                    }else if (Map1[i][j] == 'S'){
                        if (i > 0 && Map1[i-1][j] == 'R'){ Map2[i][j] = 'R'; continue;}
                        if (i < r-1 && Map1[i+1][j] == 'R'){ Map2[i][j] = 'R'; continue;}
                        if (j > 0 && Map1[i][j-1] == 'R'){ Map2[i][j] = 'R'; continue;}
                        if (j < c-1 && Map1[i][j+1] == 'R'){ Map2[i][j] = 'R'; continue;}
                        Map2[i][j] = 'S';
                    }else{ // P
                        if (i > 0 && Map1[i-1][j] == 'S'){ Map2[i][j] = 'S'; continue;}
                        if (i < r-1 && Map1[i+1][j] == 'S'){ Map2[i][j] = 'S'; continue;}
                        if (j > 0 && Map1[i][j-1] == 'S'){ Map2[i][j] = 'S'; continue;}
                        if (j < c-1 && Map1[i][j+1] == 'S'){ Map2[i][j] = 'S'; continue;}
                        Map2[i][j] = 'P';
                    }
                }
            }
            
            for (int i=0; i<r; ++i){
                for (int j=0; j<c; ++j){
                    Map1[i][j] = Map2[i][j];
                }
            }
        }
        if (z != 1){
            cout << endl;
        }
        
        for (int i=0; i<r; ++i){
            for (int j=0; j<c; ++j){
                cout << Map1[i][j];
            }
            cout << endl;
        }
    }
    
    return 0;
}