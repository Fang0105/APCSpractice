#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int dp[15][15] = {0};
bool vis[15][15] = {false};
int sx,sy,ex,ey,m,n;

int dfs(int x,int y){
	if(vis[x][y]==false){
		vis[x][y] = true;
		if(x==ex&&y==ey){
			dp[x][y] = 1;
		}else{
			for(int i=0;i<=1;i++){
				for(int j=0;j<=1;j++){
					if(x+i<=m&&y+j<=n){
						dp[x][y] += dfs(x+i,y+j);
					}
				}
			}
		}
	}
	
	return dp[x][y];
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>m>>n;
	cin>>sx>>sy;
	cin>>ex>>ey;
	cout<<dfs(sx,sy)<<endl;

	return 0;
}



