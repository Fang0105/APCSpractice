#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

int arr[205][205];
int dp[205][205];
bool vis[205][205] = {false};
int n,m;

int fun(int x,int y){
	//cout<<x<<" "<<y<<endl;	
	if(vis[x][y]==false){
		if(x==0){
			dp[x][y] = fun(x,y-1)+arr[x][y];
		}else if(y==0){
			dp[x][y] = fun(x-1,y)+arr[x][y];
		}else{
			dp[x][y] = max(fun(x-1,y),fun(x,y-1))+arr[x][y];
		}
	}
	vis[x][y] = true;
	return dp[x][y];
}


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];		
		}
	}
	vis[0][0] = true;
	dp[0][0] = arr[0][0];
	cout<<fun(n-1,m-1)<<endl;
	


	return 0;
}



