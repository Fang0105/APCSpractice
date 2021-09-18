#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int n,m,t;
vector<int>ve[1000000];
bool vis[1000000];
int good = true;
bool stat[1000000];
void dfs(int n){
	for(int i:ve[n]){
		if(vis[i]==false){
			vis[i] = true;
			stat[i] = !stat[n];
			dfs(i);
		}else{
			if(stat[n]==stat[i]){
				good = false;
				return;
			}
		}
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>t;
	while(t--){
		good = true;
		fill(vis,vis+n,false);
		fill(stat,stat+n,false);
		cin>>n>>m;
		for(int i=0;i<n;i++){
			ve[i].clear();
		}
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			ve[a].push_back(b);
			ve[b].push_back(a);
		}
		for(int i=0;i<n;i++){
			if(vis[i]==false){
				vis[i] = true;
				stat[i] = true;			
				dfs(i);
			}
		}
		cout<<(good==true?"yes":"no")<<endl;
		
	}



	return 0;
}



