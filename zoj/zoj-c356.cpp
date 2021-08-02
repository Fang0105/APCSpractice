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
	int p = 0;
	for(int i=0;i<n*n;i++){
		char c;
		cin>>c;
		if(i==n*k+p){
			cout<<c;
			k++;
			p++;
		}
	}
	cout<<endl;





	return 0;
}

