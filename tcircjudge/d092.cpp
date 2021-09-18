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
	cin>>m>>n;
	int arr[m][n];
	bool vis[m][n];
	int x=0,y=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			vis[i][j] = false;
			cin>>arr[i][j];
			if(arr[i][j]<arr[x][y]){
				x = i;
				y = j;
			}
		}
	}
	queue<pair<int,int> >qu;
	qu.push(make_pair(x,y));
	vis[x][y] = true;
	int tot = 0;
	int dir[] = {1,0,-1};
	while(qu.empty()==false){
		pair<int,int>head = qu.front();
		qu.pop();
		tot += arr[head.first][head.second];
		int mnx = -1,mny = -1;
		for(int i:dir){
			for(int j:dir){
				if(head.first+i>=0&&head.first+i<m&&head.second+j>=0&&head.second+j<n&&abs(i)!=abs(j)&&vis[i+head.first][j+head.second]==false){
					if(mnx==-1&&mny==-1){
						mnx = head.first+i;
						mny = head.second+j;
					}else{
						if(arr[mnx][mny]>arr[head.first+i][head.second+j]){
							mnx = head.first+i;
							mny = head.second+j; 	
						}
					}
				}
			}
		}
		if(mnx!=-1&&mny!=-1){
			vis[mnx][mny] = true;
			qu.push(make_pair(mnx,mny));
		}		
	}
	cout<<tot<<endl;


	return 0;
}



