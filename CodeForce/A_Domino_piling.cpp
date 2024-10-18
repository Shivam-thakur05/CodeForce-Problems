#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(int product,int &result){
    while(product > 1){
        // cout<<product<<" "<<result<<" ";
        product = product-2;
        result++;   
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    int multiplication = m*n;
    int result = 0;
    solve(multiplication,result);
    
    cout<<result<<endl;

    return 0;
}