#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][3];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    int sumX = 0, sumY = 0, sumZ = 0;

    for(int i = 0; i < n; i++) {
        sumX += arr[i][0];
        sumY += arr[i][1];
        sumZ += arr[i][2];
    }

    if(sumX == 0 && sumY == 0 && sumZ == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
