#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
string fun(int n){
	string tem = "";
	while(n){
		int k = n%10;
		char c = k+'0';
		tem = c+tem;
		n/=10;
	}
	return tem;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	string str,ans = "";
	cin>>str;
	int cnt = 1;
	char tar = str[0];
	for(int i=1;i<str.size();i++){
		if(str[i]==tar){
			cnt++;
		}else{
			ans += (fun(cnt) + tar);
			cnt = 1;
			tar = str[i];
		}
		if(i==str.size()-1){
			ans += (fun(cnt) + tar);
		}
	}
	if(str.size()>ans.size()){
		cout<<ans<<endl;
	}else{
		cout<<str<<endl;
	}






	return 0;
}

