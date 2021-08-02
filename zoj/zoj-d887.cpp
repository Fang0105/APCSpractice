#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int k;
int dp[50][50] = {0};
bool vis[50][50] = {false};
int fun(int n,int m){
	if(vis[n][m]==false){
		vis[n][m] = true;
		if(n<m){
			dp[n][m] = 0;
		}else{
			if(n==0||m==0){
				dp[n][m] = 1;
			}else{
				dp[n][m] = fun(n-1,m) + fun(n,m-1);
			}
		}
	}
	return dp[n][m];
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	while(cin>>k){
		cout<<fun(k,k)<<endl;
	}
	


	return 0;
}



