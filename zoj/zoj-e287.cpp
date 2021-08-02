#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	bool vis[n][m];
	int min = MAX;
	int sx,sy;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			vis[i][j] = false;
			cin>>arr[i][j];
			if(min>arr[i][j]){
				min = arr[i][j];
				sx = i;
				sy = j;
			}
		}
	}	
	int cnt = 0;
	queue<pair<int,int> >qu;
	qu.push(make_pair(sx,sy));
	vis[sx][sy] = true;
	while(qu.empty()==false){
		int x = qu.front().first,y = qu.front().second;
		qu.pop();
		cnt += arr[x][y];
		vis[x][y] = true;
		int mx,my,tmn = MAX;
		for(int i=-1;i<=1;i++){
			for(int j=-1;j<=1;j++){
				if(x+i<n&&y+j<m&&x+i>=0&&y+j>=0&&abs(i)!=abs(j)&&vis[x+i][y+j]==false){
					if(arr[x+i][y+j]<tmn){
						mx = x+i;
						my = y+j;
						tmn = arr[x+i][y+j];
					}
				}
			}
		}
		if(tmn!=MAX){
			qu.push(make_pair(mx,my));
		}
	}
	cout<<cnt<<endl;


	return 0;
}



