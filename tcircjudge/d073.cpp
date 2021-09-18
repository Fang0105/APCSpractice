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
	int arr[n+1][m];
	memset(arr,0,sizeof(arr));
	for(int i=1;i<=n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int dp[n+1][m];
	for(int i=0;i<m;i++){
		for(int j=1;j<=n;j++){
			dp[j][i] = arr[j][i]+dp[j-1][i];
		}
	}
	int mx = MIN;
	int c = 0;
	for(int i=1;i<=n;i++){
		int temmx = MIN;
		for(int j=i;j<=n;j++){			
			int now = dp[j][0]-dp[i-1][0];
			for(int k=1;k<m;k++){
				now = max(c,now)+dp[j][k]-dp[i-1][k];
				temmx = max(temmx,now);
			}
		}
		mx = max(mx,temmx);
	}
	cout<<mx<<endl;
	
	
	

	return 0;
}



