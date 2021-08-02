#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int n,k;
bool graph[10][10] = {false};
int canGo[10][10] = {0};
int cnt;
bool check(int x,int y){
	int xx = x,yy = y;
	while(xx>=0&&yy>=0){
		if(graph[xx][yy]==true){
			return false;
		}else{
			xx--;
			yy--;
		}
	}
	xx = x;yy = y;
	while(xx<n&&yy>=0){
		if(graph[xx][yy]==true){
			return false;
		}else{
			xx++;
			yy--;
		}
	}
	xx = x;yy = y;
	while(xx<n&&yy<n){
		if(graph[xx][yy]==true){
			return false;
		}else{
			xx++;
			yy++;
		}
	}
	xx = x;yy = y;
	while(xx>=0&&yy<n){
		if(graph[xx][yy]==true){
			return false;
		}else{
			xx--;
			yy++;
		}
	}
	return true;
}
void dfs(int id){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(check(i,j)==true&&graph[i][j]==false){
				if(id==k){
					cnt++;
				}else{
					graph[i][j] = true;
					dfs(id+1);
					graph[i][j] = false;	
				}
			}
		}
	}
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	while(cin>>n>>k&&(n||k)){
		if(k==0){
			cout<<1<<endl;
			continue;
		}
		cnt = 0;
		memset(graph,false,sizeof(graph));
		dfs(1);
		int g = 1;
		for(int i=1;i<=k;i++){
			g*=i;
		}
		cout<<cnt/g<<endl;
	} 



	return 0;
}



