#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count0 = 0, maxCount0 = 0;
    int count1 = 0, maxCount1 = 0;

    for (char c : s)
    {
        if (c == '0')
        {
            count0++;
            maxCount0 = max(maxCount0, count0);
            count1 = 0;
        }
        else
        {
            count1++;
            maxCount1 = max(maxCount1, count1);
            count0 = 0;
        }
    }

    if (maxCount0 >= 7 || maxCount1 >= 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
