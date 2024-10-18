#include<iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    if(s.length() != t.length()){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i = 0; i < s.length(); i++){
        if(s[i] != t[t.length()-1-i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}