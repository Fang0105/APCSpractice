#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int p;
	cin>>p;
	while(p--){
		int n;
		cin>>n;
		int arr[n];
		int mx = -1000000;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			int sum = 0;
			for(int j=i;j<n;j++){
				sum+=arr[j];
				mx = max(mx,sum);
			}
		}
		cout<<mx<<endl;
		
	}






	return 0;
}

