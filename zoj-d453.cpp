#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int k;
	cin>>k;
	while(k--){
		int n,m,s1,s2,e1,e2;
		cin>>n>>m>>s1>>s2>>e1>>e2;
		s1--;
		s2--;
		e1--;
		e2--;
		int arr[n][m];
		int dis[n][m] = {1000000000};
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				dis[i][j] = 1000000000;
			}
		}
		for(int i=0;i<n;i++){
			string str;
			cin>>str;
			for(int j=0;j<m;j++){
				arr[i][j] = str[j]-'0';
			}
		}
		int a1[] = {-1,0,1};
		int a2[] = {-1,0,1};
		queue<pair<int,int> >qu;
		qu.push(make_pair(s1,s2));
		dis[s1][s2] = 1;
		bool reach = false;
		while(!qu.empty()){
			int x = qu.front().first;
			int y = qu.front().second;
			for(int i:a1){
				for(int j:a2){
					if(x+i<n && x+i>=0 && y+j<m && y+j>=0  && abs(i*j)==0&&arr[x+i][y+j]==0){
						if(x+i==e1&&y+j==e2){
							reach = true;
							dis[x+i][y+j] = min(dis[x][y]+1,dis[x+i][y+j]);
						}
						if(dis[x+i][y+j]!=1000000000){
							continue;
						}
						qu.push(make_pair(x+i,y+j));
						dis[x+i][y+j] = min(dis[x][y]+1,dis[x+i][y+j]);
					}
				}
			}
			qu.pop();
		}
		cout<<(!reach?0:dis[e1][e2])<<endl;
	}






	return 0;
}

