#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
vector<int>ve;
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		ve.push_back(a);
	}
	int cnt = 0;
	int loc = 0;
	bool forward = true;
	for(int i=1;i<=n;i++){
		while(ve[loc]!=i){
			if(forward){
				if(loc==ve.size()-1){
					forward = false;
					loc--;
					cnt++;
				}else{
					loc++;
				}
			}else{
				if(loc==0){
					forward = true;
					loc++;
					cnt++;
				}else{
					loc--;
				}
			}
		}
	}
	cout<<cnt<<endl;






	return 0;
}
