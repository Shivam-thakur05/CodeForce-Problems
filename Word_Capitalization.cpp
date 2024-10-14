#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char ch = s[0];
    if(ch >= 'a' && ch <= 'z'){
    char replace = 'A'+ (ch - 97);
    s[0] = replace;
    }

    cout<<s<<endl;
    return 0;
}