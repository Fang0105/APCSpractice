#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int n,start,q,cnt = 0;
vector<int>ve[100000];
map<pair<int,int>,int>mp;
bool vis[10000] = {false};
void dfs(int id){
	for(int i:ve[id]){
		if(vis[i]==false){
			vis[i] = true;
			if(mp[{id,i}]>=q){
				cnt++;
				dfs(i);
			}else{
			}
		}
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>start>>q;
	for(int i=0;i<n-1;i++){
		int a,b,c;
		cin>>a>>b>>c;
		ve[a].push_back(b);
		ve[b].push_back(a);
		mp[{a,b}] = c;
		mp[{b,a}] = c;
	}
	vis[start] = true;
	dfs(start);
	cout<<cnt<<endl;

	return 0;
}



