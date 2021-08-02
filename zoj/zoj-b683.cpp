#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int arr[35][35];
int vis[35][35] = {0};
int n,m;
unsigned long long cnt = 0,sum1 = 0,sum2 = 1;
int a1[] = {-1,0,1,0};
int a2[] = {0,1,0,-1};
void dfs(int x,int y,int tem,int sx,int sy){
	if(x==sx && y==sy && tem>=8){
		cnt++;
		sum1+=(tem-1);
		sum2*=(tem-1);
		return;
	}
	for(int i=0;i<4;i++){
		int k = x+a1[i],l = y+a2[i];
		if(k<n && k>=0 && l<m && l>=0 && arr[k][l]==1 && vis[k][l]==0){
			vis[k][l] = 1;
			dfs(k,l,tem+1,sx,sy);
		}
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		for(int j=0;j<m;j++){
			arr[i][j] = (str[j]=='#'?0:1);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(vis[i][j]==0&&arr[i][j]==1){
				dfs(i,j,1,i,j);
			}
		}
	}
	cout<<cnt<<" "<<sum1<<" "<<sum2<<endl;






	return 0;
}

