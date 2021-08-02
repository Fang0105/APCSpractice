#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,mx;
	cin>>n;
	int dp[n],arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	dp[0] = arr[0];
	for(int i=1;i<n;i++){
		dp[i] = max(0,dp[i-1])+arr[i];
	}
	mx = dp[0];
	for(int i=0;i<n;i++){
		mx = max(dp[i],mx);
	}
	cout<<mx<<endl;





	return 0;
}

