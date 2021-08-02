#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int sum = 0;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		sum+=a;
	}
	int k;
	cin>>k;
	while(k--){
		int a,b,c;
		cin>>a>>b>>c;
		sum += (b-a+1)*c;
		cout<<sum<<endl;
	}






	return 0;
}

