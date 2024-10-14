#include <bits/stdc++.h>
using namespace std;
bool isLucky(long long int n){
    string s = to_string(n);
    bool four = false;
    bool seven = false;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '4' || s[i] == '7'){
            if(s[i] == '4') four = true;
            if(s[i] == '7') seven = true;
        }
        else return false;
    }
    if(four && seven) return true;
    else return false;
}

int main(){
    long long int a;
    cin>>a;
    
    int ans = isLucky(a);

    if(ans == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;

}
