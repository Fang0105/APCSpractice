#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int w,n,m;
int dp[1000000+5];
int fun(int k){
	if(dp[k]!=0){
		return dp[k];
	}
	if(k==0){
		dp[k] = 1;
	}
	if(k>=n){
		if(k>=m){
			dp[k] = fun(k-m) + fun(k-n);
		}else{
			dp[k] = fun(k-n);
		}
	}
	return dp[k];
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int g;
	cin>>g;
	while(g--){
		cin>>w>>n>>m;
		if(n>m){
			swap(n,m);
		}
		memset(dp,0,sizeof(dp));
//		bool b = true;
//		for(int i=w;i>0;i--){
//			if(fun(i)==0){
//				cout<<i<<endl;
//				b = false;
//				break;
//			}
//		}
//		if(b){
//			cout<<"good"<<endl;
//		}
		int mx = 0;
		dp[0] = 1;
		for(int i=1;i<=w;i++){
			if(i>=n){
				dp[i] |= dp[i-n];
			}
			if(i>=m){
				dp[i] |= dp[i-m];
			}
			if(dp[i]==0){
				mx = i;
			}
		}
		if(mx==0){
			cout<<"good"<<endl;
		}else{
			cout<<mx<<endl;
		}
		
	}
		







	return 0;
}

