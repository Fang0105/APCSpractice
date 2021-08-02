#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string str;
	while(cin>>str){
		for(int i=1;i<str.length();i++){
			cout<<abs(str[i]-str[i-1]);
		}
		cout<<endl;
	}






	return 0;
}

