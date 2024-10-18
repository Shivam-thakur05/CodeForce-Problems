#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;

    int m,n;
    cin>>m>>n;

    int a;
    cin>>a;

    if(a >= m && m == n) {
        cout<<0<<endl;
        return 0;
    }
    if(m > n){
        while(m < a){
            count++;
            m = m-a;
            n = n-a;
        }
    }
    
    

    return 0;
}