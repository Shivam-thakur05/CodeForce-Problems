#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    vector<int> nums;

    // Extract numbers
    for (char c : s) {
        if (c != '+') {
            nums.push_back(c - '0');
        }
    }

    // Sort numbers
    sort(nums.begin(), nums.end());

    // Reconstruct the string
    string result;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (i > 0) {
            result += '+';
        }
        result += to_string(nums[i]);
    }

    // Output the result
    cout << result << endl;

    return 0;
}
