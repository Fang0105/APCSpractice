#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+1)
#define pb(X) push_back((X))
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int r;
	cin>>r;
	while(r--){
		int n;
		cin>>n;
		vector<int>ve;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			ve.pb(a);
		}
		int tot = 0;
		for(int i=1;i<ve.size();i++){
			int a = min(ve[i],ve[i-1]),b = max(ve[i],ve[i-1]);
			while(a*2<b){
				tot++;
				a*=2;
			}
		}
		cout<<tot<<endl;
	}
	


	return 0;
}



