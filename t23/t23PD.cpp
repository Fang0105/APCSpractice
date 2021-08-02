#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int k = 0;
	while(n>=k){
		n-=k;
		k++;
	}
	cout<<k<<endl;



	return 0;
}



