#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
vector<int>ve[1000];
int vis[1000] = {0};
int cnt = 0;
int n,m;
void dfs(int a){
	if(a==n-1){
		cnt++;
		return ;
	}
	for(int i:ve[a]){
		if(vis[i]==0){
			vis[i] = 1;
			dfs(i);
			vis[i] = 0;
		}
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		ve[a].push_back(b);
	}
	dfs(0);
	cout<<cnt<<endl;





	return 0;
}

