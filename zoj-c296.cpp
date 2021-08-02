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
	int n,m,k;
	cin>>n>>m>>k;
	int loc = 0;
	for(int i=n-k+1;i<=n;i++){
		loc = (loc+m)%i;
	}
	cout<<loc+1<<endl;;
	
	
	
	
	
	
	



	return 0;
}



