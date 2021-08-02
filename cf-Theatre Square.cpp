#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,a;
	cin>>n>>m>>a;
	n = (n/a)+(n%a==0?0:1);
	m = (m/a)+(m%a==0?0:1);
	cout<<n*m<<endl;


	return 0;
}



