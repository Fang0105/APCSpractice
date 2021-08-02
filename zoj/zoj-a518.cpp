#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	while(cin>>n>>m && n>=0 && m>=0){
		int k = abs(n-m);
		if(k>=50){
			k = 100-k;
		}
		cout<<k<<endl;
	}






	return 0;
}

