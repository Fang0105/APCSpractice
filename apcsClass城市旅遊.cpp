#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	while(cin>>n>>m){
		vector<int>ve[n+1];
		int vis[n+1];
		memset(vis,0,sizeof(vis));
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			ve[a].push_back(b);
		}
		int s,e;
		cin>>s>>e;
		queue<int>qu;
		for(int i:ve[s]){
			vis[i] = 1;
			qu.push(i);
		}
		bool reach = false;
		while(!qu.empty()){
			if(qu.front()==e){
				reach = true;
				break;
			}
			for(int i:ve[qu.front()]){
				if(vis[i]==0){
					vis[i] = 1;
					qu.push(i);
				}
			} 
			qu.pop();
		}
		cout<<(reach?"Yes":"No")<<endl;
	}
	
	






	return 0;
}

