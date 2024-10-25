#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    string ans = "";

    for(int i = 0; i < s.length(); i++){
        //if string contain any upper case letter convert into lowercase
        if(s[i] >= 'A' && s[i] <= 'Z'){
            char ch = s[i] - 65 + 'a';
            s[i] = ch;  
        }
        //if the char is not vowel add into ans string
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
            ans.push_back('.');
            ans.push_back(s[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}