#include <iostream>
using namespace std;

int main(){
    int n, k;
    int counter = 1;
    
    while (cin >> n && n != 0){
        int arr[n][n];
        
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                cin >> arr[i][j];
            }
        }
        cout << "Case " << counter << ": ";
        
        for (int i=0; i<(n/2 + n%2); ++i){
            int total = 0;
            int start = i;
            int end = n - i - 1;
            
            if (start == end){
                total = arr[end][end];
            }else{
                for (int j=start; j<=end; ++j){
                    // 上
                    total += arr[start][j];
                    // 下
                    total += arr[end][j];
                    // 左
                    total += arr[j][start];
                    // 右
                    total += arr[j][end];
                }
                total -= arr[start][start] + arr[start][end] + arr[end][start] + arr[end][end];
            }
            if (i > 0){
                cout << ' ';
            }
            cout << total;
        }
        cout << endl;
        counter++;
    }
    
    return 0;
}
// Accepted	0.000