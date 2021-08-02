#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int nx,ny;
int n,m;
char arr[25][25];
void dfs(int dir){
	if(dir==1){
		for(int i=ny-1;i>=0;i--){
			if(arr[nx][i] == '\\'){
				//cout<<dir<<" -> "<<2<<endl;
				ny = i;
				dfs(2);
				return;
			}else if(arr[nx][i]=='/'){
				ny = i;
				//cout<<dir<<" -> "<<4<<endl;
				dfs(4);
				return;
			}else if(arr[nx][i]=='x'){
				arr[nx][i] = '&';
				return;
			}
		}
	}else if(dir==2){
		for(int i=nx-1;i>=0;i--){
			if(arr[i][ny]=='\\'){
				nx = i;
				//cout<<dir<<" -> "<<1<<endl;
				dfs(1);
				return;
			}else if(arr[i][ny]=='/'){
				nx = i;
				//cout<<dir<<" -> "<<3<<endl;
				dfs(3);
				return;
			}else if(arr[i][ny]=='x'){
				arr[i][ny] = '&';
				return;
			}
		}
	}else if(dir==3){
		for(int i=ny+1;i<n;i++){
			if(arr[nx][i]=='\\'){
				ny = i;
				//cout<<dir<<" -> "<<4<<endl;
				dfs(4);
				return;
			}else if(arr[nx][i]=='/'){
				ny = i;
				//cout<<dir<<" -> "<<2<<endl;
				dfs(2);
				return;
			}else if(arr[nx][i]=='x'){
				arr[nx][i] = '&';
				return;
			}
		}
	}else if(dir==4){
		for(int i=nx+1;i<m;i++){
			if(arr[i][ny]=='\\'){
				nx = i;
				//cout<<dir<<" -> "<<3<<endl;
				dfs(3);
				return;
			}else if(arr[i][ny]=='/'){
				nx = i;
				//cout<<dir<<" -> "<<1<<endl;
				dfs(1);
				return;
			}else if(arr[i][ny]=='x'){
				arr[i][ny] = '&';
				return;
			}
		}
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t = 1;
	while(cin>>n>>m&&n&&m){
		for(int i=0;i<m;i++){
			string str;
			cin>>str;
			for(int j=0;j<n;j++){
				arr[i][j] = str[j];
				if(str[j]=='*'){
					nx = i;
					ny = j;
				}
			}
		}
		if(nx==0){
			dfs(4);
		}else if(nx==m-1){
			dfs(2);
		}else if(ny==0){
			dfs(3);
		}else{
			dfs(1);
		}
		cout<<"HOUSE "<<t++<<endl;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cout<<arr[i][j];
			}
			cout<<endl;
		}
	}
	
	
	



	return 0;
}



