#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n){
		vector<int>ve;
		while(n--){
			int m;
			cin>>m;
			ve.push_back(m);
		}
		sort(ve.begin(),ve.end());
		for(int i=0;i<ve.size();i++){
			if(i!=0){
				cout<<" ";
			} 
			cout<<ve[i];
		}
		cout<<endl;
	}






	return 0;
}

