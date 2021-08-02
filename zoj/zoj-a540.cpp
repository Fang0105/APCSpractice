#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int max(int a,int b){
	return (a>b?a:b);
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n&&n){
		int arr[n];
		int dp[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		dp[0] = max(arr[0],0);
		int mx = -10000000000000;
		for(int i=1;i<n;i++){
			dp[i] = max(dp[i-1],0)+arr[i];
			mx = max(dp[i],mx);
		}
		if(mx<=0){
			cout<<"Losing streak."<<endl;
		}else{
			cout<<"The maximum winning streak is "<<mx<<"."<<endl;
		}
	}



	return 0;
}



