#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int n;
int br;
int dp[200005];
int vis[200005];
vector<int>ve[200005];
int pow(int a,int b){
	int base = a,ans = 1;
	while(b!=0){
		if(b&1!=0)ans*=base;
		base*=base;
		b>>=1;
	}
	return ans;
}
int dfs(int loc){
	int node = 1;
	if(dp[loc]!=0){
		return dp[loc];
	}
	for(int i:ve[loc]){
		if(vis[i]==0){
			vis[i] = 1;
			node += dfs(i);
		}
	}
	dp[loc] = node;
	return dp[loc];
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=0;i<n-1;i++){
		int a,b;
		cin>>a>>b;
		ve[a].push_back(b);
		ve[b].push_back(a);
	}
	int k;
	cin>>k;
	while(k--){
		cin>>br;
		memset(dp,0,sizeof(dp));
		memset(vis,0,sizeof(vis));
		int sum = 0;
		vis[br] = 1;
		for(int i:ve[br]){
			vis[i] = 1;
			sum += pow(dfs(i),2);
		}
		cout<<sum<<" ";
	}
	cout<<endl;




	return 0;
}
/*
5
1 2
2 3
3 4
4 5
1
3
*/
