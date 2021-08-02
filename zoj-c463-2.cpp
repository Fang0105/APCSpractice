#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int n;
vector<int>ve[100005];
bool vis[100005] = {false};
int dp[100005];
int dfs(int id){
	if(!vis[id]){
		dp[id] = 0;
		vis[id] = true;
		for(int i:ve[id]){
			dp[id] = max(dp[id],dfs(i)+1);
		}
	}
	return dp[id];
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		while(a--){
			int b;
			cin>>b;
			ve[i].push_back(b);
		}
	}
	int cnt = 0;
	int root = 1;
	for(int i=1;i<=n;i++){
		int h = dfs(i);
		cnt += h;
		if(h>dfs(root)){
			root = i;
		}
	}
	cout<<root<<endl<<cnt<<endl;

	return 0;
}



