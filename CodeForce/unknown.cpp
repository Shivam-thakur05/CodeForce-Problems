#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cout<<"enter any word : ";
	cin>>s;
	
	int result = 0;
	int i = 0;

	while(i < s.length()-1){
		int temp1 = s[i];
		int temp2 = s[i+1];
		
		int flag = abs(temp1 - temp2);
		result += flag;
		i++;
	}
	cout<<result<<endl;
	return 0;
}