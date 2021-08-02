#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int dp[1005];
int fun(int n){
	if(n==0){
		return 1;
	}
	if(dp[n]!=0){
		return dp[n];
	}
	if(n-1>=0){
		dp[n] += 2*fun(n-1);
	}
	if(n-2>=0){
		dp[n] += fun(n-2);
	}
	if(n-3>=0){
		dp[n] += fun(n-3);
	}
	return dp[n];
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n){
		cout<<fun(n)<<endl;
	}



	return 0;
}



