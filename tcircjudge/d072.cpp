#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k;
	cin>>n>>k;
	int arr[2][n];
	int dp[2][n];
	for(int i=0;i<n;i++){
		cin>>arr[0][i]>>arr[1][i];
		if(i==0){
			dp[0][i] = abs(arr[0][i]-k);
			dp[1][i] = abs(arr[1][i]-k);
		}else{
			dp[0][i] = min(abs(arr[0][i-1]-arr[0][i])+dp[0][i-1],abs(arr[1][i-1]-arr[0][i])+dp[1][i-1]);
			dp[1][i] = min(abs(arr[0][i-1]-arr[1][i])+dp[0][i-1],abs(arr[1][i-1]-arr[1][i])+dp[1][i-1]);
		}
	}
	cout<<min(dp[0][n-1],dp[1][n-1])<<endl;
	


	return 0;
}



