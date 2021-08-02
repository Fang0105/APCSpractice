#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int a,b,c;
	cin>>a>>b>>c;
	int ans = ((a+b+c)/2)*(a-(a+b+c)/2)*(b-(a+b+c)/2)*(c-(a+b+c)/2)*(-1);
	cout<<ans<<endl;





	return 0;
}

