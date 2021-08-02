#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
vector<int>ve[505];
bool reach = false;
int mx = 10000000000;
map<pair<int,int>,int>mp;
int vis[505] = {0};
int s,e;
void dfs(int n,int tem){
	if(n==e){
		reach = true;
		mx = min(mx,tem);
		return;
	}
	for(auto i:ve[n]){
		if(vis[i]==0){
			vis[i] = 1;
			dfs(i,max(tem,mp[{i,n}]));
			vis[i] = 0;
		}
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		ve[a].push_back(b);
		ve[b].push_back(a);
		mp[make_pair(a,b)] = c;
		mp[make_pair(b,a)] = c;
	}
	cin>>s>>e;
	dfs(s,0);
	if(reach){
		cout<<mx<<endl;
	}else{
		cout<<-1<<endl;
	}





	return 0;
}

