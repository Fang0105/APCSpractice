#include<bits/stdc++.h>
//#define int long long
#define endl '\n'
#define int unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	n--;
	int base[3][3] = {{1,1,1},{1,1,0},{1,0,1}};
	int ans[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
	while(n!=0){
		if(n&1){
			int tem[3][3];
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					tem[i][j] = 0;
					for(int k=0;k<3;k++){
						tem[i][j] += ans[i][k]*base[k][j];
					}
				}
			}
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					ans[i][j] = tem[i][j];
				}
			}
			//ans*=base;
		}
		int tem[3][3];
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				tem[i][j] = 0;
				for(int k=0;k<3;k++){
					tem[i][j] += base[i][k]*base[k][j];
				}
			}
		}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				base[i][j] = tem[i][j];
			}
		}
		//base*=base;
		n>>=1;
	}
	int tot = 0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			tot += ans[i][j];
		}
	}
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			cout<<ans[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	cout<<tot<<endl;
	

	return 0;
}



