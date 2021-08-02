#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int dp[2][1000005];
int arr[1000005];
int max(int a,int b){
	if(a>b){
		return a;
	} else{
		return b;
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n){
		for(int i=0;i<n;i++){
			dp[0][i] = dp[1][i] = 0;
			cin>>arr[i];
		}
		dp[0][0] = 0;
		dp[1][0] = arr[0];
		int mx = arr[0];
		for(int i=1;i<n;i++){
			dp[0][i] = max(dp[0][i-1],dp[1][i-1]);
			dp[1][i] = arr[i] + dp[0][i-1];
			mx = max(max(mx,dp[0][i]),dp[1][i]);
		}
		cout<<mx<<endl;
	}
	




	return 0;
}

