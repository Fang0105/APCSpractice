#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string str;
	cin>>str;
	if(str[0]=='-'){
		cout<<'-';
		str.erase(0,1);
	}
	bool b = false;
	for(int i=str.size()-1;i>=0;i--){
		if(str[i]=='0'){
			if(b){
				cout<<str[i];
			}
		}else{
			cout<<str[i];
			b = true;
		}
	}
	cout<<endl;


	return 0;
}



