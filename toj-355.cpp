#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k;
	cin>>n>>k;
	int a = 0,b = 0;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		if(k>=a){
			b = a;
			a = k;
		}else if(k>=b){
			b = k;
		}
	}
	cout<<b<<endl;






	return 0;
}

