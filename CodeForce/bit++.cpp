#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++){
        cin>>s[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i][0] == '+' || s[i][2] == '+'){
            ans++;
        }
        else{
            ans--;
        }
    }
    cout<<ans;
    return 0;
}