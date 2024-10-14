#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int cntUpr = 0;
    int cntLwr = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            cntLwr++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            cntUpr++;
        }
    }

    if(cntLwr >= cntUpr){
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i] - 65 + 'a';
            }
        }
    }
    else{
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] = s[i] - 97 + 'A';
            }
        }
    }

    cout<<s<<endl;
    return 0;
}