#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(int n){
	int gcd;
	cin>>gcd;
	for(int i=1;i<n;i++){
		int a;
		cin>>a;
		gcd = __gcd(gcd,a);
	}
	cout<<gcd<<endl;
}

signed main(){
	//ios::sync_with_stdio(0);cin.tie(0);
	int n;
	while(cin>>n){
		solve(n);
	}
 
 
 
 
    return 0;
}

