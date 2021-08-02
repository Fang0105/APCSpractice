#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int mx = 1;
	for(int k=0;k<n;k++){
		int cnt = 1;
		int p = k;
		while(arr[p%n]>=cnt){
			if(cnt>n){
				cout<<n<<endl;
				return 0;
			}
			cnt++;
			p++;
		}
		mx = max(mx,--cnt);
		if(mx>n){
			cout<<n<<endl;
			return 0;
		}
	}
	if(mx>n){
		cout<<n<<endl;
	}else{
		cout<<mx<<endl;
	}
	





	return 0;
}

