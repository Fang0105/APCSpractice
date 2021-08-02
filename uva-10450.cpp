#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
long long dp[55][2] = {0};
long long fun(int a,int b){
	if(a==1){
		dp[a][0] = 1;
		dp[a][1] = 1;
	}else{
		if(b==0){
			if(dp[a][b]==0){
				dp[a][b] = fun(a-1,0) + fun(a-1,1);
			}
		}else{
			if(dp[a][b]==0){
				dp[a][b] = fun(a-1,0);
			}
		}
	}
	return dp[a][b];
} 
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int t1 = fun(50,0);
	int t2 = fun(50,1);
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		cout<<"Scenario #"<<i<<":"<<endl<<dp[a][0]+dp[a][1]<<endl<<endl;
	}






	return 0;
}

