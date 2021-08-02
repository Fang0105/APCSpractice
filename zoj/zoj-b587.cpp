#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int n;
int dp[35] = {0};
void init(){
	dp[0] = 1;
	dp[1] = 0;
	dp[2] = 3;
}
int fun(int m){
	if(dp[m]==0){
		if(m%2==1){
			return 0;
		}else{
			dp[m] = fun(m-2);
			for(int i=m-2;i>=0;i-=2){
				dp[m] += 2*(fun(i));
			}
		}
	}
	return dp[m];
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	init();
	while(cin>>n&&n!=-1){
		cout<<fun(n)<<endl;
	}


	return 0;
}



