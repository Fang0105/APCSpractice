#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int k;
	cin>>k;
	int ans = 0;
	while(k--){
		int p = 0;
		int n = 0;
		for(int i=0;i<3;i++){
			cin>>p;
			if(p==1){
				n++;
			}
		}
		if(n>=2){
			ans++;
		}
	}
	cout<<ans<<endl;



	return 0;
}



