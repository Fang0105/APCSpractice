#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int fun(int n){
	int cnt = 0;
	while(n>1){
		if(n%2==1){
			n = (n-1)/2+1;
		}else{
			n/=2;
		}
		cnt++;
	}
	return cnt;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string str;
	while(getline(cin,str)){
		int cnt = 0;
		int tot = 0;
		for(int i=0;i<str.size();i++){
			if(str[i]==' '){
				tot++;
			}else{
				cnt = max(cnt,fun(tot));
				tot = 0;
			}
		}
		cout<<cnt<<endl;
	}



	return 0;
}



