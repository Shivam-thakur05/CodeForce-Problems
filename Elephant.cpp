#include<bits/stdc++.h>
using namespace std;
int main(){
    //take input for distance
    int x;
    cin>>x;
    int count = 0;
    if(x < 5){
        count++;
        cout<<count<<endl;
    }
    else{
        for(int i = 0; i < x; i = i+5){
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}