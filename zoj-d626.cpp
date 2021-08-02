#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int n;
int arr[105][105] = {0};
int go[] = {1,0,-1};
void dfs(int x,int y){
	arr[x][y] = 1;
	for(int i:go){
		for(int j:go){
			if(x+i<n&&x+i>=0&&y+j<n&&y+j>=0&&abs(i)!=abs(j)){
				if(arr[x+i][y+j]==0){
					arr[x][y] = 1;
					dfs(x+i,y+j);
				}
			}
		}
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		for(int j=0;j<n;j++){
			if(str[j]=='+'){
				arr[i][j] = 1;
			}else{
				arr[i][j] = 0;
			}
		}
	}
	int a,b;
	cin>>a>>b;
	dfs(a,b);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]==1){
				cout<<'+';
			}else{
				cout<<'-';
			}
		}
		cout<<endl;
	}





	return 0;
}

