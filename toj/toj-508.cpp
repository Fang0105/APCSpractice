#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int n,m;
int arr[1005][1005];
bool vis[1005][1005];
int dp[1005][1005] = {0};
int a1[] = {1,0,-1};
int a2[] = {1,0,-1};
int cnt = 0;
//void dfs(int x,int y){
//	for(int i:a1){
//		for(int j:a2){
//			if(x+i!=n && x+i>=0 && y+j!=m && y+j>=0 && abs(i)!=abs(j) &&(arr[x+i][y+j]==arr[x][y]-1) && vis[x+i][y+j]==false){
//				vis[x+i][y+j] = true;
//				if(arr[x+i][y+j]==0){
//					cnt++;
//				}else{
//					dfs(x+i,y+j);
//				}
//				vis[x+i][y+j] = false;
//			}
//		}
//	}
//}
/*
	2 10
	0123456789
	1012345678
*/
int dfs(int x,int y){
	int tem = 0;
	if(dp[x][y]!=-1){
		return dp[x][y];
	}
	for(int i:a1){
		for(int j:a2){
			if(arr[x][y]==0){
				dp[x][y] = 1;
				return dp[x][y];
			}else{
				if(x+i!=n && x+i>=0 && y+j!=m && y+j>=0 && abs(i)!=abs(j) &&(arr[x+i][y+j]==arr[x][y]-1) && vis[x+i][y+j]==false){
					vis[x+i][y+j] = true;
					tem += dfs(x+i,y+j);
					vis[x+i][y+j] = false;
				}
			}
			
		}
	}
	dp[x][y] = tem;
	return dp[x][y];
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		for(int j=0;j<m;j++){
			arr[i][j] = str[j]-'0';
			vis[i][j] = false;
			dp[i][j] = -1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]==9){
				cnt += dfs(i,j);
			}
		}
	}
	cout<<cnt<<endl;





	return 0;
}


