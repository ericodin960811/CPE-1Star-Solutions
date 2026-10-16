#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--){
        int board[5][5];
        int n;
        
        for (int i=0; i<5; ++i){
            for (int j=0; j<5; ++j){
                if (i == 2 && j == 2){
                    board[2][2] = 0;
                }else{
                    cin >> n;
                    board[i][j] = n;
                }
            }
        }
        
        int luckyNum;
        int linecounter;
        bool win = false;
        
        for (int counter=1; counter<=75; ++counter){
            cin >> luckyNum;
            
            if (win){
                continue;
            }
            bool found = false;
            
            for (int i=0; i<5; ++i){
                for (int j=0; j<5; ++j){
                    if (board[i][j] == luckyNum){
                        board[i][j] = 0;
                        found = true;
                        break;
                    }
                }
                if (found){
                    break;
                }
            }
            bool foundline = false;
            
            if (counter >= 4){
                // row -
                if (!foundline){
                    for (int r=0; r<5; ++r){
                        if (board[r][0] == 0 && board[r][1] == 0 && board[r][2] == 0 && 
                            board[r][3] == 0 && board[r][4] == 0){
                                foundline = true;
                                break;
                            }
                    }
                }
                // col |
                if (!foundline){
                    for (int c=0; c<5; ++c){
                        if (board[0][c] == 0 && board[1][c] == 0 && board[2][c] == 0 && 
                            board[3][c] == 0 && board[4][c] == 0){
                                foundline = true;
                                break;
                        }
                    }
                }
                // \ /
                if (!foundline && board[0][0] == 0 && board[1][1] == 0 && board[2][2] == 0 && 
                    board[3][3] == 0 && board[4][4] == 0){
                        foundline = true;
                }
                    
                if (!foundline && board[0][4] == 0 && board[1][3] == 0 && board[2][2] == 0 && 
                    board[3][1] == 0 && board[4][0] == 0){
                        foundline = true;
                }
                if (foundline){
                    linecounter = counter;
                    win = true;
                }
            }
        }
        if (win){
            cout << "BINGO after " << linecounter << " numbers announced" << endl;
        }
    }
    
    return 0;
}
// 超煩，頭破掉
// 	AC (1ms, 296KB)