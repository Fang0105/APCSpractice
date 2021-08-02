#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	while(n--){
		set<int>se;
		for(int i=0;i<m;i++){
			int a;
			cin>>a;
			se.insert(a);
		}
		int cnt = 0;
		for(int i=0;i<m;i++){
			int a;
			cin>>a;
			if(se.count(a)){
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}






	return 0;
}

