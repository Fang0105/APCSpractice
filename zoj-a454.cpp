#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
struct node{
	int sum;
}arr[1005];
vector<int>ve[1005];
bool vis[1005];
void init(){
	for(int i=0;i<1005;i++){
		arr[i].sum = 0;
		vis[i] = false;
		ve[i].clear();
	}
}
node dfs(int id){
	if(vis[id]==false){
		vis[id] = true;
		int tem = arr[id].sum;
		for(int i:ve[id]){
			tem = max(tem,dfs(i).sum+arr[id].sum);
		}
		arr[id].sum = tem;
	}
	return arr[id];
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int r;
	cin>>r;
	while(r--){
		init();
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int k,g;
			cin>>k>>g;
			arr[i].sum = k;
			for(int j=0;j<g;j++){
				int w;
				cin>>w;
				w--;
				ve[i].push_back(w);
			}
		}
		int mx = MIN;
		for(int i=0;i<n;i++){
			if(vis[i]==false){
				mx = max(mx,dfs(i).sum);
			}
		}
		cout<<mx<<endl;
	}



	return 0;
}



