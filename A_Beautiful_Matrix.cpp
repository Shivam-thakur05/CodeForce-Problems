#include <bits/stdc++.h>
using namespace std;

int main() {
    int m = 5, n = 5;
    int matrix[m][n];
    
    // Input the matrix
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    int Xidx = -1, Yidx = -1;
    
    // Find the position of '1' in the matrix
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] == 1) {
                Xidx = i;
                Yidx = j;
            }
        }
    }
    
    // Calculate the number of moves to bring '1' to the center (2,2)
    int centerX = 2;
    int centerY = 2;
    int moves = abs(centerX - Xidx) + abs(centerY - Yidx);
    
    cout << moves << endl;
    
    return 0;
}
