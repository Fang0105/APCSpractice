#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	unsigned long long a,m,b;
	cin>>a>>m>>b;
	unsigned long long sum = a%b;
	for(int i=0;i<m;i++){
		int p;
		char t;
		cin>>p>>t;
		sum = (sum*(p%b))%b;
	}
	cout<<sum<<endl;






	return 0;
}

