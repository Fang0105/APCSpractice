#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	while(cin>>n>>m){
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		while(m--){
			int k;
			cin>>k;
			int loc = upper_bound(arr,arr+n,k)-arr;
			if(loc%2==0){
				cout<<0<<endl;
			}else{
				cout<<1<<endl;
			}
		}
	}
	




	return 0;
}

