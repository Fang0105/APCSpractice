#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
vector<int>ve[805];
bool reach = false;
int vis[805] = {0};
int a,b;
void dfs(int n){
	for(auto i:ve[n]){
		if(vis[i]==0&&reach==false){
			if(i==b){
				reach = true;
				return;
			}
			vis[i] = 1;
			dfs(i);
			vis[i] = 0;
		}
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	while(cin>>n>>m){
		reach = false;
		for(int i=0;i<n;i++){
			ve[i].clear();
			vis[i] = 0;
		}
		for(int i=0;i<m;i++){
			int q,w;
			cin>>q>>w;
			ve[q].push_back(w);
		}
		cin>>a>>b;
		dfs(a);
		if(reach){
			cout<<"Yes!!!"<<endl;
		}else{
			cout<<"No!!!"<<endl;
		}
	}
	






	return 0;
}

