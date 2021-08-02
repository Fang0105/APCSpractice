#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
char mp[1005][1005];
bool vis[1005][1005] = {false};
int n,m;
int mv[] = {1,-1,0};
int dfs(int x,int y){
	int cnt = 1;
	for(int i:mv){
		for(int j:mv){
			if(x+i>=0&&x+i<n&&y+j>=0&&y+j<m&&abs(i)!=abs(j)&&mp[i+x][y+j]=='W'&&vis[i+x][j+y]==false){
				vis[i+x][j+y] = true;
				cnt += dfs(i+x,y+j);
			}
		}
	}
	return cnt;
}
int mx = MIN,mn = MAX,tot = 0;
bool anyWater = false;
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		for(int j=0;j<str.size();j++){
			mp[i][j] = str[j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mp[i][j]=='W'&&vis[i][j]==false){
				anyWater = true;
				tot++;
				vis[i][j] = true;
				int h = dfs(i,j);
				mx = max(mx,h);
				mn = min(mn,h);
			}
		}
	}
	if(anyWater==false){
		cout<<"0 0 0"<<endl;
		return 0;
	}
	cout<<mx<<" "<<mn<<" "<<tot<<endl;


	return 0;
}



