#include<bits/stdc++.h>
using namespace std;
vector<int>ve[100005];
bool isChild[100005] = {false};
int high[100005];
void dfs(int start){
	if(ve[start].empty()){
			high[start] = 0;
	}else{
		int mx;
		for(auto i:ve[start]){
			dfs(i);
			mx = max(mx,high[i]+1);
		}
		high[start] = mx;	
	}
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n){
		memset(high,0,sizeof(high));
		memset(isChild,false,sizeof(isChild));
		for(int i=1;i<=n;i++){
			ve[i].clear();
			int a;
			cin>>a;
			for(int j=0;j<a;j++){
				int b;
				cin>>b;
				isChild[b] = true;
				ve[i].push_back(b);
			}
		}
		int root;
		for(int i=1;i<=n;i++){
			if(isChild[i]==false){
				root = i;
				break;
			}
		}
		dfs(root);
		long long sum = 0;
		for(int i=1;i<=n;i++){
			sum+=high[i];
		}
		cout<<root<<'\n'<<sum<<'\n';
	}
	
	
	



	return 0;
}

