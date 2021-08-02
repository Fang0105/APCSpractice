#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	ull fa[85];
	fa[0] = 1;
	fa[1] = 1;
	for(int i=2;i<83;i++){
		fa[i] = fa[i-1] + fa[i-2];
	}
	while(cin>>n&&n){
		cout<<fa[n]<<endl;
	}






	return 0;
}

