#include <bits/stdc++.h>
using namespace std;

bool isLucky(long long int n)
{
    string s = to_string(n);
    for (char c : s)
    {
        if (c != '4' && c != '7')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    long long int a;
    cin >> a;

    string s = to_string(a);
    int luckyCount = 0;

    for (char c : s)
    {
        if (c == '4' || c == '7')
        {
            luckyCount++;
        }
    }

    if (isLucky(luckyCount))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}