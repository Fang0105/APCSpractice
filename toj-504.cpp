#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string str;
	cin>>str;
	int sum = 0;
	for(int i=0;i<str.length();i++){
		sum += str[i]-'0';
	}
	if(sum%3==0){
		cout<<"You are lucky."<<endl;
	}else{
		cout<<"Sorry..."<<endl;
	}
	





	return 0;
}

