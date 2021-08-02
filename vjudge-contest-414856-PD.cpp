#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	char arr[n][m];
	bool vis[n][m];
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		for(int j=0;j<m;j++){
			vis[i][j] = false;
			arr[i][j] = s[j];
		}
	}
	int x = 0,y = 0,cnt = 0;
	while(true){
		if(x<0||x>=n||y<0||y>=m){
			cout<<"Out"<<endl;
			return 0;
		}else{
			if(vis[x][y] == true){
				cout<<"Lost"<<endl;
				return 0;
			}else{
				vis[x][y] = true;
				if(arr[x][y]=='N'){
					x--;
				}else if(arr[x][y]=='S'){
					x++;
				}else if(arr[x][y]=='W'){
					y--;
				}else if(arr[x][y]=='E'){
					y++;
				}else if(arr[x][y]=='T'){
					cout<<cnt<<endl;
					return 0;
				}
				cnt++;
			}
		}
	}



	return 0;
}



