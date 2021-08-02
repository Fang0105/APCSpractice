#include<bits/stdc++.h>
//#define int long long
#define endl '\n'
#define int unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int n;
int dp[55][3] = {0};

int dfs(int len,int dir){
	if(len==1){
		dp[len][dir] = 1;
	}else {
		if(dp[len][dir]==0){
			if(dir==0){
				dp[len][dir] = dfs(len-1,0) + dfs(len-1,1) + dfs(len-1,2);
			}else if(dir==1){
				dp[len][dir] = dfs(len-1,0) + dfs(len-1,1);
			}else{
				dp[len][dir] = dfs(len-1,0) + dfs(len-1,2);
			}
		}
	}
	return dp[len][dir];
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	cout<<dfs(n,0)+dfs(n,1)+dfs(n,2)<<endl;



	return 0;
}


