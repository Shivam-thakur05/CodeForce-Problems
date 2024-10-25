#include <bits/stdc++.h>
using namespace std;

int maxPart(int target, int a, int b, int c, vector<int>& dp) {
    if (target == 0) {
        return 0;  // No more parts needed to reach zero
    }
    if (target < 0) {
        return INT_MIN;  // Invalid partition
    }
    
    // Check if already computed
    if (dp[target] != -1) {
        return dp[target];
    }
    
    // Recursive calls for each possible segment
    int first = maxPart(target - a, a, b, c, dp);
    int second = maxPart(target - b, a, b, c, dp);
    int third = maxPart(target - c, a, b, c, dp);
    
    // Compute the maximum segments
    int ans = max(first, max(second, third));
    
    // If a valid partition is found, store and return the result with an additional 1 for the current cut
    dp[target] = (ans != INT_MIN) ? ans + 1 : INT_MIN;
    
    return dp[target];
}

int main() {
    int n;
    cin >> n;
    
    int a, b, c;
    cin >> a >> b >> c;
    
    // Initialize dp array with -1 for memoization
    vector<int> dp(n + 1, -1);
    
    int res = maxPart(n, a, b, c, dp);
    
    // If no valid partition was found, output 0; otherwise, output the result
    if (res < 0) {
        cout << 0 << endl;
    } else {
        cout << res << endl;
    }
    
    return 0;
}
