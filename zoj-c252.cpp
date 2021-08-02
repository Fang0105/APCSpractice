#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int n,m;
int arr[105][105];
int vis[105][105];
int cnt[10];
int s[] = {0,-1,1};
int dfs(int i,int j,int sum){
	vis[i][j] = 1;
	int tot = sum;
	for(int x:s){
		for(int y:s){
			if(i+x<n&&i+x>=0&&j+y<m&&j+y>=0&&vis[i+x][j+y]==0&&arr[i+x][j+y]==arr[i][j]){
				vis[i+x][j+y] = 1;
				tot += dfs(i+x,j+y,sum);
			}
		}
	}
	return tot;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	while(cin>>n>>m&&m){
		memset(arr,0,sizeof(arr));
		memset(vis,0,sizeof(vis));
		for(int i=0;i<n;i++){
			string str;
			cin>>str;
			for(int j=0;j<m;j++){
				arr[i][j] = str[j]-'0';
			}
		}
		int big = 0;
		int gov = 0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(vis[i][j]==0){
					int sum = dfs(i,j,1);
					if(sum!=1){
						gov++;
						big = max(big,sum);
					}
				}
			}
		}
		if(big>gov){
			cout<<"peace"<<endl;
		}else{
			cout<<"choas"<<endl;
		}
	}





	return 0;
}

