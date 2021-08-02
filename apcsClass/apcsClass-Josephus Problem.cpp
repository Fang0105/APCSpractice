#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int>ve;
	for(int i=1;i<=n;i++){
		ve.push_back(i);
	}
	int ans = 0;
	while(ve.size()!=1){
		ans = ans-1+(m%ve.size());
		if(ans<0){
			ans = 0;
			int j = ve.size()-1;
			ve.erase(ve.begin()+j);
		}else{
			ans = ans%ve.size();
			ve.erase(ve.begin()+ans);
		}
		
	}
	cout<<ve[0]<<endl;




	return 0;
}

