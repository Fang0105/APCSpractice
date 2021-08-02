#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int m = 1000000007;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int x1,x2,a,b,n;
	cin>>x1>>x2>>a>>b>>n;
	int base[2][2] = {{0,a},{1,b}};
	int ans[2][2] = {{1,0},{0,1}};
	n-=1;
	while(n!=0){
		if(n&1){
			int tem[2][2];
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					tem[i][j] = 0;
					for(int k=0;k<2;k++){
						tem[i][j] += (ans[i][k]*base[k][j])%m;
					}
				}
			}
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					ans[i][j] = tem[i][j];
				}
			}
		}
		int tem[2][2];
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				tem[i][j] = 0;
				for(int k=0;k<2;k++){
					tem[i][j] += (base[i][k]*base[k][j])%m;
				}
			}
		}
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				base[i][j] = tem[i][j];
			}
		}
		n>>=1;
	}

	cout<<(x1*ans[0][0]+x2*ans[1][0])%m<<endl;

	return 0;
}



