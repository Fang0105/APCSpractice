#include<bits/stdc++.h>
using namespace std;
int depth[100005];
vector<int>ve[100005];

void dfs(int now,int limit){
	for(auto i:ve[now]){
		if(i!=limit){
			depth[i] = depth[now]+1;
			dfs(i,now);
		}
	}
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n){
		for(int i=0;i<n;i++){
			ve[i].clear();
			depth[i] = 0;
		}
		for(int i=0;i<n-1;i++){
			int a,b;
			cin>>a>>b;
			ve[a].push_back(b);
			ve[b].push_back(a);
		}
		dfs(0,-100);
		int mx = 0,index = 0;
		for(int i=0;i<n;i++){
			if(depth[i]>mx){
				index = i;
				mx = depth[i];
			}
		}
		for(int i=0;i<n;i++){
			depth[i] = 0;
		}
		dfs(index,-100);
		mx = 0;
		for(int i=0;i<n;i++){
			mx = max(depth[i],mx);
		}
		cout<<mx<<'\n';
	}






	return 0;
}

