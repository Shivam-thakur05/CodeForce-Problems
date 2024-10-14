#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;

    int ans = 0;
    for(int i = 1; i <= w; i++){
        int temp = k*i;
        ans += temp;
    }
    int res = (ans-n);
    if(res > 0){
        cout<<res;
    }
    else{
         cout<<0<<endl;
    }
   
    return 0;
}