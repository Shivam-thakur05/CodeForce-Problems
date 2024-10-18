#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int k){
    int count = 0;
    if(arr[0] == 0) return 0;
    else{
        for(int i = 0; i < n; i++){
            if(arr[i] >= arr[k-1] && arr[i] != 0){
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int ans = solve(arr,n,k);
    cout<<ans<<endl;
    return 0;
}