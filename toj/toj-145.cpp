#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int arr[1005][1005] = {0};

signed main(){
	IOS
	int n,m,k,q;
	cin>>n>>m>>k>>q;
	while(k--){
		int x,y;
		cin>>x>>y;
		arr[x][y]++;
	}
	int prefix[n][m+1];
	for(int i=0;i<n;i++){
		prefix[i][0] = 0;
		for(int j=0;j<m;j++){
			prefix[i][j+1] = prefix[i][j]+arr[i][j];
		}
	}
	while(q--){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		int sum = 0;
		for(int i=x1;i<=x2;i++){
			sum += prefix[i][y2+1]-prefix[i][y1];
		}
		cout<<sum<<endl;
	}





	return 0;
}

