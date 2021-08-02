#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int arr[n][n];
	memset(arr,0,sizeof(arr));
	int k,t;
	cin>>k>>t;
	for(int i=0;i<k;i++){
		int a,b;
		cin>>a>>b;
		arr[n-1-a][b] = 1;
	}
	int cnt = 0,ans = 0;
	int x = n-1,y = 0;
	bool b = false;
	for(int i=0;i<t;i++){
		char c;
		cin>>c;
		cnt++;
		if(c=='E'){
			y++;
		}else if(c=='W'){
			y--;
		}else if(c=='S'){
			x++;
		}else if(c=='N'){
			x--;
		}
		if(arr[x][y]==1){
			if(!b){
				ans = cnt;	
			}
			b = true;
		}					
	}
	if(b){
		cout<<ans<<endl;
	}else{
		cout<<"(^_^)"<<endl;
	}
	






	return 0;
}

