#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string str;
	cin>>str;
	set<char>se;
	for(int i=0;i<4;i++){
		se.insert(str[i]);
	}
	string ans;
	int n;
	cin>>n;
	while(n--){
		cin>>ans;
		int a = 0,b = 0;
		for(int i=0;i<str.length();i++){
			if(se.count(ans[i])){
				if(str[i]==ans[i]){
					a++;
				}else{
					b++;
				}
			}
		}
		cout<<a<<"A"<<b<<"B"<<endl;
	}






	return 0;
}

