#include<bits/stdc++.h>
using namespace std;
int main()
{
    string one,two;
    cin>>one>>two;
    int value1 = 0,value2 = 0;
    for(int i = 0; i < one.length(); i++){
        if(one[i] >= 'A' && one[i] <= 'Z'){
            one[i] = 'a'+one[i]-65;
        }
        int temp = one[i];
        value1 = value1 + temp;
    }

    for(int i = 0; i < two.length(); i++){
        if(two[i] >= 'A' && two[i] <= 'Z'){
            two[i] = 'a'+two[i]-65;
        }
        int temp = two[i];
        value2 = value2 + temp;
    }
    cout<<value1<<" "<<value2<<endl;
    if(value1 < value2) {
        cout<<-1<<endl;
    }
    else if(value1 == value2){
        cout<<0<<endl;
    }
    else cout<<1<<endl;
}