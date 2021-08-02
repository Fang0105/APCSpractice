#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n&&n){
		vector<int>ve;
		for(int i=0;i<n;i++){
			int k;
			cin>>k;
			ve.push_back(k);
		}
		sort(ve.begin(),ve.end());
		for(int i=0;i<n;i++){
			if(i!=0){
				cout<<" ";
			}
			cout<<ve[i];
		}
		cout<<endl;
	}






	return 0;
}

