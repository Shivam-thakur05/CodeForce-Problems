#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(k < arr[i]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}